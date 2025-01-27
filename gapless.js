// script.js
 
　　//ロード中のアイコン
    const imageElement = document.querySelector('.circle-image');
    const spinnerboxElement = document.querySelector('.spinner-box');
    const circleborderElement = document.querySelector('.circle-border');
    const circlecoreElement = document.querySelector('.circle-core');
    const toggleButton = document.querySelector('.toggle-button');
    const loadtextElement = document.getElementById('loadtext');
    const fadeElement = document.getElementById('fadecontainer');
    const chatElement = document.getElementById('chatcontainer');
    const optElement = document.getElementById("optcontainer");
    const statusElement = document.getElementById("status");
    const openMapButton = document.getElementById('showMapBtn');
    const mapModal = document.getElementById('mapModal');
    const closeModalButton = document.getElementById('closeModalButton');
    const loginElement = document.getElementById("logincontainer");
    const navButton = document.getElementById('navButton');
    const restartButton = document.getElementById('restartButton');
    var resev = [];
    var userpin;
    let pin = '';
    var username="";
    const messages = [];
    let clickCount = -1;
    let navigating = false;
    const textElement = document.getElementById('fade-text');
    const textmarginElement = document.getElementById('fade-text-margin');
    /*toggleButton.addEventListener('click', () => {
      if (imageElement.style.display === 'none' || imageElement.style.display === '') {
        imageElement.style.display = 'block'; // 画像を表示
        spinnerboxElement.style.display = 'block'; // 画像を表示
        circleborderElement.style.display = 'block'; // 画像を表示
        circlecoreElement.style.display = 'block'; // 画像を表示
        toggleButton.textContent = '非表示'; // ボタンのテキストを変更
      } else {
        imageElement.style.display = 'none'; // 画像を非表示
        spinnerboxElement.style.display = 'none';
        circleborderElement.style.display = 'none';
        circlecoreElement.style.display = 'none';
        toggleButton.textContent = '表示'; // ボタンのテキストを変更
      }
    });*/

  //画面外枠とGAPLESS表示
    function animateBorders() {
      const strokeElement = document.querySelector('.stroke');
      strokeElement.classList.add('is-animated');
    }

    window.onload = () => {//読み込み時の処理
      
//GASからのデータ取得参考https://monaledge.com/article/406
      const url = "https://script.google.com/macros/s/AKfycbyUL-lZOCgV1KyVRLx_I77KXbZx5RvM-OPtuibC9ShRVCe5y--3NHbsD-9z6mHQZqa74g/exec"; // GASのAPIのURL

      const requestParams = {
        method: "GET",
        headers: {
          "Accept": "application/json",
          "Content-Type": "application/x-www-form-urlencoded",
        },
      };
      

      fetch(url, requestParams)
        .then((response) => response.json())
        .then((result) => {
          resev = result.resev;
	  userpin = result.pin;
          console.log(result); // {"status":"OK"}が返ってくる
	  console.log("pin");
	  console.log(result.pin);
	  console.log(result.data);
	  username=result.data;
          isgetdataElement.textContent = "取得済み";
        })
        .catch((e) => showlogin());
//.catch((e) => fakeload());
	 restartButton.style.display = 'none';
    };

function showlogin(){
  imageElement.style.display = 'none'; // 画像を非表示
        spinnerboxElement.style.display = 'none';
        circleborderElement.style.display = 'none';
        circlecoreElement.style.display = 'none';
        loadtextElement.textContent = ''; // 表示を更新
	loginElement.style.display = 'flex';
}

    function pressKey(num) {
	    
      if (pin.length < 4) {
	console.log("presspin");
        pin += num;
        updateDisplay();
      }
    }

    function updateDisplay() {
      const display = document.getElementById('display');
      display.textContent = pin.padEnd(4, '-');
    }

    function clearInput() {
      pin = '';
      updateDisplay();
    }

    function submitPin() {
	    utterance = new SpeechSynthesisUtterance('');
            synth.speak(utterance);
      if (pin.length === 4) {
        alert(`入力された暗証番号: ${pin}`);
	if(pin == userpin){
		console.log("成功");
		fakeload();
	}
      } else {
        alert('4桁の暗証番号を入力してください。');
      }
    }




　
var ros = new ROSLIB.Ros({
          url: 'ws://localhost:9090'  //松嶋PCの仮想環境向け
          //url: 'ws://172.25.17.31:9090'　//その他デバイス向け(学校wifi)
	  //url: 'ws://192.168.116.85:9090'　//その他デバイス向け(松嶋家wifi)
	  //url: 'ws://192.168.11.12:9090'　//体育館
	    //url: 'ws://172.20.10.12:9090' //戸部損の奴
        });//いちいち変えるのめんどくさい死んでくれ

        ros.on('connection', function() {
            console.log('Connected to rosbridge server');
	
        });

        ros.on('error', function(error) {
            console.log('Error connecting to rosbridge server: ', error);
		alert("ROS2 error:websocketとの接続に失敗しました。インターネット状況を確認し、ページをリロードしてください。");
        });

        ros.on('close', function() {
            console.log('Connection to rosbridge server closed');
		alert("ROS2 error:websocketとの接続が切断しまた。インターネット状況を確認し、ページをリロードしてくだ>さい。");
        });

function fakeload(){
	loginElement.style.display = 'none';
	imageElement.style.display = 'flex'; // 画像を非表示
        spinnerboxElement.style.display = 'flex';
        circleborderElement.style.display = 'flex';
        circlecoreElement.style.display = 'flex';
	loadtextElement.textContent = 'ROS接続中'; // 表示を更新
        setTimeout(() => {
            loadtextElement.textContent = 'ROS接続完了';
              setTimeout(() => {
              loadtextElement.textContent = 'データ同期中';
              }, 500);
        }, 1000);// ロード表記更新までの遅延（ただの演出）
        setTimeout(() => {
        loadfinish();
        }, 3000);
}
　
　function loadfinish(){
  console.log(resev);
       messages.push("待機場所");	
      for (  var i = 0;  i < resev.length;  i++  ) {
       if(i != 0){
	messages.push(resev[i - 1].location + " → " + resev[i].location);
       }
       //messages.push(resev[i].location);
       //messages.push(resev[i - 1].location + " → " + resev[i].location);
       console.log ( resev[i].location );
      }
	messages.push("待機場所");
	console.log(messages);
	console.log(resev);
//ロードアイコンを非表示
  imageElement.style.display = 'none'; // 画像を非表示
        spinnerboxElement.style.display = 'none';
        circleborderElement.style.display = 'none';
        circlecoreElement.style.display = 'none';
	loadtextElement.textContent = ''; // 表示を更新
        //toggleButton.textContent = '表示'; // ボタンのテキストを変更
	//外枠の表示
  const strokeElement = document.querySelector('.stroke');
      strokeElement.classList.add('is-animated');

      const element = document.querySelector('.mask-bg');
      setTimeout(() => {
        element.classList.add('is-animated');
      }, 100); // アニメーション開始までの遅延（調整可能）
 const startmess = "ようこそ" + username + "さん。次の案内を押して見学を始めましょう。質問があれば音声入力を開始のボタンを押してから話しかけてください。もし機体が暴走したら機体上部の赤いスイッチを押してください。操作方法は使い方のボタンから確認できます。"
     toggleFade();
	console.log(username);
	addMessage(startmess, 0)
	speakResponse(startmess);
}

  //画面ズームを禁止する
  document.addEventListener("gesturestart", (e) => {
  e.preventDefault();
  });


/*document.addEventListener('touchmove', function(event) {//画面スクロール禁止
    event.preventDefault();
}, { passive: false });*/


    function toggleFade() {//案内の進行
     if(messages.length - 1 > clickCount){
        textElement.classList.remove('show');
        textElement.classList.add('hide');

	if((clickCount >= 0) && (messages.length - 2 > clickCount)){
	     goalpose(resev[clickCount + 1].x,resev[clickCount + 1].y,resev[clickCount + 1].z,resev[clickCount + 1].w);//goal_poseトピックの送信
	     navButton.disabled = true;
		navigating = true;
		const startmess = "案内を開始します。次の目的地は" + resev[clickCount + 1].location +"です。";
		addMessage(startmess, 0)
                speakResponse(startmess);
        }

        setTimeout(() => {
        console.log("hide");
        //clickCount ++; // 配列の長さで循環
	let fontSize = Math.max(20, 68 - messages[clickCount].length * 2.5);
	//let lineHeight = fontSize * 1.2;
		
	textElement.style.fontSize = `${fontSize}px`;
	//textElement.style.lineHeight = `${lineHeight}px`;
	//textmarginElement.style.fontSize = `${60 - fontSize}px`;
        textElement.textContent = messages[clickCount];
        textElement.classList.remove('hide');
          setTimeout(() => {
          console.log("reset");
          textElement.classList.add('reset');
          textElement.classList.remove('reset');
            setTimeout(() => {
            console.log("show");
            textElement.classList.add('show');
            }, 50);
          }, 50);
        }, 300);

	chatElement.classList.add('show');

	setTimeout(() => {
	 fadeElement.classList.add('show');
	}, 400);

        setTimeout(() => {
	 optElement.classList.add('show');
        }, 500);

	setTimeout(() => {
　　　　animateText('Waiting for data...');
        }, 2000);
	
	setTimeout(() => {
         openMapButton.classList.add('show');
        }, 700);

	setTimeout(() => {
　　　　const navElement = document.querySelector('.fadecontainer');                 
	navElement.classList.add('is-animated');
        }, 800);

        clickCount ++;
     }
    }

function animateText(text) {
      statusElement.innerHTML = ''; // 前の文字をクリア

      // 各文字に<span>タグを追加して、アニメーションを適用
      text.split('').forEach((char, index) => {
        const span = document.createElement('span');
        span.innerHTML = char === ' ' ? '&nbsp;' : char;
        span.style.animationDelay = `${index * 0.075}s`; // アニメーションの遅延を設定
        statusElement.appendChild(span);
      });
    }

function apanddown(){
	 alert('現在この機能はサポートされていません');
	/*speakResponse("ようこそ" + username + "さん。次の案内を押して見学を始めましょう。質問があれば音声入力を開始のボタンを押してから話しかけてください。>もし機体が暴走したら機体上部の赤いスイッチを押してください。操作方法は使い方のボタンから確認できます。");*/
	
}


/*function speakText(text) {
            //const text = "読み上げる文章"
            if (synth.speaking) {
                console.warn("既に読み上げ中です");
                return;
            }


            utterance = new SpeechSynthesisUtterance(text);
            utterance.lang = "ja-JP"; // 日本語を設定
            utterance.onend = () => {
                console.log("読み上げ完了");
            };
            utterance.onerror = (event) => {
                console.error("読み上げ中にエラーが発生しました", event);
            };
            synth.speak(utterance);
        }

        function stopSpeech() {
            if (synth.speaking) {
                synth.cancel();
                console.log("読み上げを停止しました");
            }
        }

                    function initSpeech() {
            // 無音のテキストで音声合成を初期化
            utterance = new SpeechSynthesisUtterance('');
            synth.speak(utterance);

          //  speechInitialized = true;
        }*/
