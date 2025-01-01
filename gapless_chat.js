//script

        let synth = window.speechSynthesis;
        let utterance;
        let recognizedText = '';
        const chatContainer = document.getElementById('chat-container');
        const statusIndicator = document.getElementById('status-indicator');
        let isInitialized = false;
        statusIndicator.textContent = "待機中";
        function initializeAndStart() {
            if (!isInitialized) {
                const silence = new SpeechSynthesisUtterance('');
                synth.speak(silence);
                isInitialized = true;
            }
            startRecognition();
        }

        function addMessage(text, isUser) {
            const messageDiv = document.createElement('div');
            messageDiv.className = `message ${isUser ? 'user-message' : 'ai-message'}`;
            messageDiv.textContent = text;
            chatContainer.appendChild(messageDiv);
            chatContainer.scrollTop = chatContainer.scrollHeight;
        }

        function startRecognition() {
            const SpeechRecognition = window.SpeechRecognition || window.webkitSpeechRecognition;

            if (!SpeechRecognition) {
                statusIndicator.textContent = "このブラウザは音声認識をサポートしていません。";
                return;
            }

            const recognition = new SpeechRecognition();
            recognition.lang = 'ja-JP';
            recognition.interimResults = true;
            recognition.continuous = false;

            recognition.onstart = () => {
                statusIndicator.textContent = "音声認識を開始しました...";
            };

            recognition.onresult = (event) => {
                recognizedText = '';
                for (const result of event.results) {
                    recognizedText += result[0].transcript;
                }
                statusIndicator.textContent = "音声認識中...";
            };

            recognition.onerror = (event) => {
                statusIndicator.textContent = `エラー: ${event.error}`;
            };

            recognition.onend = () => {
                statusIndicator.textContent = "音声認識を終了しました。";
                if (recognizedText) {
                    addMessage(recognizedText, true);
                    getGeminiResponse();
                }
            };

            recognition.start();
        }

        async function getGeminiResponse() {
            if (!recognizedText.trim()) {
                alert("音声入力を先に行ってください。");
                return;
            }

            const apiKey = "AIzaSyAA9OOgj6qrZMG6lLRrdQUoBcEWXZVxTFk";
            const url = `https://generativelanguage.googleapis.com/v1/models/gemini-pro:generateContent?key=${apiKey}`;
            const system_prompt =
        "あなたは沼津高専について質問をする中学生に向けて、質問を受けて沼津高専について説明・案内を行います。100文字程度で、親しみやすい口調で回答してください。以下に質問を示します";
            const PRESET_KNOWLEDGE =
"以下に示す事前知識を参考に回答を考えてください。沼津高専は静岡県沼津市にある工業高等専門学校で、ここでは、様々な工学分野を学べるカリキュラムが用意されてい>ます。電子制御工学科、電気電子工学科、制御情報工学科、機械工学科、物質工学科がある。"

            try {
                statusIndicator.textContent = "応答を生成中...";
                const response = await fetch(url, {
                    method: "POST",
                    headers: {
                        "Content-Type": "application/json",
                    },
                    body: JSON.stringify({
                        contents: [{
                            parts: [{
                                text: system_prompt + recognizedText + PRESET_KNOWLEDGE
                            }]
                        }]
                    })
                });

                if (!response.ok) {
                    throw new Error(`HTTP error! Status: ${response.status}`);
                }

                const data = await response.json();
                const responseText = data.candidates[0].content.parts[0].text;
                addMessage(responseText, false);
                statusIndicator.textContent = "応答が完了しました";
                speakResponse(responseText);
            } catch (error) {
                statusIndicator.textContent = `Error: ${error.message}`;
            }
        }

        function speakResponse(text) {
            stopSpeech();
            if (synth.speaking) {
                console.warn("既に読み上げ中です");
                return;
            }

            if (!text) {
                const lastAiMessage = chatContainer.querySelector('.ai-message:last-child');
                if (!lastAiMessage) {
                    alert("読み上げる応答がありません。");
                    return;
                }
                text = lastAiMessage.textContent;
            }

            utterance = new SpeechSynthesisUtterance(text);
            utterance.lang = "ja-JP";

            utterance.onend = () => {
                statusIndicator.textContent = "読み上げ完了";
            };

            utterance.onerror = (event) => {
                statusIndicator.textContent = "読み上げ中にエラーが発生しました";
            };

            synth.speak(utterance);
            statusIndicator.textContent = "読み上げ中...";
        }

        function stopSpeech() {
            if (synth.speaking) {
                synth.cancel();
                statusIndicator.textContent = "読み上げを停止しました";
            }
        }
