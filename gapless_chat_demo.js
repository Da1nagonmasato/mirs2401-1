//script
let talk = 0;
const demotext = ["沼津高専には機械工学科、電気電子工学科、電子制御工学科、制御情報工学科、物質工学科があり様々なことを学ぶことができます。","電子制御工学科は様々な工学について学べる科だよ。電気電子工学、制御工学、情報工学、機械工学などの分野について基礎から応用までバランスよく学ぶことができるんだ。だから応用力のある人材を育てることが出来るよ。","クリエイティブラボでは電子制御工学科の4年生がミルスを行っています。ミルスでは、1年間を通して与えられ>たテーマの課題を見つけ、解決するという流れで行われています。","",""];
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
//どうして人に投げた仕事まで俺がやらなきゃならない？どうかしてんのか
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
        "あなたは沼津高専について質問をする中学生に向けて、質問を受けて沼津高専について説明・案内を行います。100文字程度で、親しみやすい口調で回答してください。また、質問文には誤字が含まれる可能性があるため注意してください。";
           /* const PRESET_KNOWLEDGE =
"以下に示す事前知識を参考に回答を考えてください。沼津高専は静岡県沼津市にある工業高等専門学校で、ここでは、様々な工学分野を学べるカリキュラムが用意されてい>ます。電子制御工学科、電気電子工学科、制御情報工学科、機械工学科、物質工学科がある。電子制御工学科は、多様な分野に活用できる専門知識と統合技術を備えたエンジニアの養成を目的としています。本学科では、電気電子工学、制御工学、情報工学、機械工学などの分野について基礎から応用までバランスよく学ぶことができます。また、あらゆる技術の基本となる数学、物理学、英語の学習指導にも力を注いでいます。低学年時は、各種プログラミング演習、電子回路の設計、工場実習などを通して、制御に必要な要素技術を身につけます。4学年では、自律型移動ロボットの製作にチームで取り組み、要素技術を適切に統合する力とアイデアを実現する創造力を育成します(ミルス)。制御情報工学科では、コンピュータを応用した複合機器やシステムの設計、製造、運用等の分野について学んでいます。低学年ではＣ／Ｃ＋＋言語の修得を目的としたプログラミング演習とマイコン制御ロボットの開発を目的としたメカトロニクス演習を多く行い、高学年ではコンピュータを応用した具体的なシステムの開発(創造設計)を学生がグループで取り組み、企画から設計・製作、そして検証・考察・成果発表を行っています。電気電子工学科では、回路理論や電磁気学について学んでいます。また、電気回路理論や電磁気現象の講義に連動した実験テーマはもちろんのこと、コンピュータハードウェアの仕組みなど、講義では扱わない領域でも実験を行い学んでいます。機械工学科では、機械や装置ならびにこれらに関連するシステムの設計・製造を学んでいます。また、金属加工技術や機械設計製図で機械技術者になるための勉強をしています。物質工学科では、材料科学分野という無機材料や有機材料の合成、分析、物性測定、機能性評価を学ぶ分野と、生物工学分野という化学に基礎を置いた生物工学の手法を身につける分野があります。電気電子工学科では、電子制御工学科は様々な工学について学べる科だよ。電気電子工学、制御工学、情報工学、機械工学などの分野について基礎から応用までバランスよく学ぶことができるんだ。だから応用力のある人材を育てることが出来るよ。 以下の質問に答えてください。aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"*/

		const PRESET_KNOWLEDGE ="以下に示す事前知識を参考に回答を考えてください。沼津高専は静岡県沼津市にある工業高等専門学校で、ここでは、様々な工学分野を学べるカリキュラムが用意されています。電子制御工学科、電気電子工学科、制御情報工学科、機械工学科、物質工学科がある。ここから電子制御工学科の説明になります。電子制御工学科は、多様な分野に活用できる専門知識と統合技術を備えたエンジニアの養成を目的としています。本学科では、電気電子工学、制御工学、情報工学、機械工学などの分野について基礎から応用までバランスよく学ぶことができます。また、あらゆる技術の基本となる数学、物理学、英語の学習指導にも力を注いでいます。低学年時は、LEGOブロックによるロボット開発、各種プログラミング演習、電子回路の設計、工場実習などを通して、制御に必要な要素技術を身につけます。4学年では、自律型移動ロボットの製作にチームで取り組み、要素技術を適切に統合する力とアイデアを実現する創造力を育成します。5学年の卒業研究では、自ら工学的問題を発見し、培った知識と技術を応用してその解決に挑みます。電子制御工学科の卒業生は、電気・電子系、機械系、情報系など幅広い産業分野で活躍しています。一方で、大学進学はもとより、一層深い専門知識を修得するために沼津高専専攻科への進学を選択し、指導教員のもとでさらに2年間の研究に励み、多数の研究成果を世界に発信しています。主な授業科目は以下になります。電磁気学，計算機工学，電子機械設計・製作，回路理論，システム制御工学，プログラミング言語，工学数理，工業英語，電気・機械製図，工業力学，電子制御工学実験，卒業研究。クリエイティブラボでは、電子制御工学科４年生がミルスという授業に取り組んでいるよ。この授業では、毎年変わるテーマに向かって問題を見つけてロボットで解決していくという流れで進んでいくんだ。今年はロボットともに作る社会なんだ。ここから制御情報工学科の説明になります。";
		const PRESET_KNOWLEDGE2 = "制御情報工学科は、コンピュータを応用した複合機器やシステムの設計、製造、運用等の分野で社会に貢献できる実践的技術者の養成を目的としています。カリキュラムは、情報工学とシステム・制御工学を重視し、機械工学及び電気・電子工学の関係分野を含んで体系的に編成されています。1~3学年では、Ｃ／Ｃ＋＋言語の修得を目的としたプログラミング演習とマイコン制御ロボットの開発を目的としたメカトロニクス演習に多くの時間を充て、コンピュータに関する様々な知識や技術を修得します。4学年の創造設計では、コンピュータを応用した具体的なシステムの開発を学生がグループで取り組み、企画から設計・製作、そして検証・考察・成果発表に至るまでの一連の過程を体験します。高学年では、計測制御、メカトロニクス、コンピュータシミュレーション等の工学実験を各実験室において少人数で体験します。5年間一貫教育の総括としての卒業研究では、教員の個別指導のもとに、具体的な問題の発見と解決を通して自己学習力と創造力を育成します。本学科の卒業生は、情報通信、自動車、ロボット、家電、医療機器等、幅広い産業分野で活躍しています。主な授業科目は以下になります。計算機アーキテクチャ，オペレーティングシステム，プログラミング，離散数学，電磁気学，数値解析，設計工学，計測工学，自動制御，ロボット工学，コンピュータグラフィックス，人工知能，データベースシステム，生産システム，制御情報工学実験，卒業研究。";
		const PRESET_KNOWLEDGE3 = "ここから電気電子工学科の説明になります。地球環境に配慮したクリーンエネルギーの確保やCO2を削減するための新技術、クラウドコンピューティングによる情報ネットワーク社会の構築には、電気電子工学の知識と技術が必須です。電気電子工学科では、幅広い産業分野において電気電子工学の知識と技術を活かした、問題解決能力を持つ、優れた技術者の養成に努めています。特に、近年の高度化した技術に対応できるように、時代に即した授業カリキュラムを構築し、講義による理論の修得と実験による技能の体得がスムーズに行われるように配慮しています。電気電子工学の根幹をなす、回路理論や電磁気学などの基礎科目は、低学年から卒業まで学年に応じた内容でステップアップすることにより、理論と応用力を修得する構成となっています。高学年では先端技術に関するテーマを選択科目として開講し、技術者としての素養を涵養できるよう工夫しています。他の特徴として、電気回路理論や電磁気現象の講義に連動した実験テーマはもちろんのこと、コンピュータハードウェアの仕組みなど、講義では扱わない領域でも実験に取り入れて、体系的・体験的に理解できるようにしています。また、本学科は高電圧関連の実験設備も充実しており、電気主任技術者（電験）認定校です。在学中に所定の課程を修めて卒業すると、実務経験を経て第二種電気主任技術者資格が取得できます。主な授業科目は以下になります。回路理論，電磁気学，パワーエレクトロニクス，電力工学，制御工学，コンピュータ工学，通信工学，電子回路，固体電子工学，電気電子機器，プログラミング，電気電子工学実験，エネルギー変換工学，卒業研究。";
		const PRESET_KNOWLEDGE4 = "ここから機械工学科の説明になります。機械工学科は、機械や装置ならびにこれらに関連するシステムを設計・製造する能カをもった“機械技術者”を養成すること目標としています。第2～3学年での機械工作実習により製品を作り出す“ものづくり”の基本となる金属加工技術を学び、また第2～5学年にわたる機械設計製図によってアイデアを現実のものにするための設計・製図技術を修得します。機械技術者にとって必須の材料力学、熱力学、水力学などの力学を中心とした専門科目は、低学年での工学基礎科目との密接な連携の上に授業が行われています。これらの専門科目については、機械工学実験による実技と経験を通じて、その内容を深く理解できるものとしてあります。また、情報処理技術・コンピュータ技術についても、専門科目と連携させて学びます。第5学年で行われる卒業研究では、知識や技術の活用だけでなく、さまざまな工学問題を解決するために必要となる総合的な能力を養っています。主な授業科目は以下になります。材料力学，熱力学，水力学，金属材料学，機械工作法，機構学，制御工学，機械設計法，機械設計製図，機械工学実験，機械工作実習，卒業研究。";
		const PRESET_KNOWLEDGE5 = "ここから物質工学科の説明になります。ファインケミカルズ、セラミックスなどの機能材料の化学（材料科学分野）、及び分子生物学、酵素・細胞・遺伝子工学（生物工学分野）の急速で広範囲な技術発展に伴い、化学と生命科学について幅広い知識と技術をもった人材が必要になっています。このような社会の要請に応えるために物質工学科が設置されています。物質工学科では、材料科学分野あるいは生物工学分野の何れともに、専門基礎の教育に重点を置き、理論の学修と並行して実験を行うよう配慮しています。材料科学分野では、無機材料や有機材料の合成、分析、物性測定、機能性評価、さらには物理化学や化学工学での熱力学やプラント設計に必要な物質収支などを修得できるようにカリキュラムが用意されており、これからの化学工業の発展に貢献できる創造性豊かな技術者の養成を目指しています。一方、生物工学分野では、化学に基礎を置いた生物工学の手法を身につけ、化学工業、医薬品工業、食品工業などの研究開発や生産分野で、それらを活用できる実践的な技術者の養成を目指しています。また、私たちをとりまく社会は、経済のグローバル化やDXがすすみ、社会的課題の解決に向けた分野横断的な連携が求められています。物質工学科では、これらに対応すべく、社会からの要請に応えるカリキュラムを編成し学生達の教育にあたっています。主な授業科目は以下になります。物質工学入門，分析化学，無機化学，有機化学，物理化学，生物化学，化学工学，分離工学，微生物工学，培養工学，酵素工学，細胞工学，遺伝子工学，機器分析，品質管理，化学と情報学，科学英語，物質工学実験（無機分析化学，有機化学，物理化学，化学工学，生物工学），卒業研究。";
const system_prompt2 = "以下に質問文を示す。";
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
                                text: system_prompt + PRESET_KNOWLEDGE + PRESET_KNOWLEDGE2 + PRESET_KNOWLEDGE3 + PRESET_KNOWLEDGE4 + PRESET_KNOWLEDGE5 + recognizedText
                            }]
                        }]
                    })
                });

                if (!response.ok) {
                    throw new Error(`HTTP error! Status: ${response.status}`);
                }

                const data = await response.json();
                const responseText = data.candidates[0].content.parts[0].text;
                addMessage(demotext[talk], false);
                statusIndicator.textContent = "応答が完了しました";
                speakResponse(demotext[talk]);
		    talk ++;
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
