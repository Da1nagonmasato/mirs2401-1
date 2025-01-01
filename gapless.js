// script.js
 
　　//ロード中のアイコン
    const imageElement = document.querySelector('.circle-image');
    const spinnerboxElement = document.querySelector('.spinner-box');
    const circleborderElement = document.querySelector('.circle-border');
    const circlecoreElement = document.querySelector('.circle-core');
    const toggleButton = document.querySelector('.toggle-button');
    const loadtextElement = document.getElementById('loadtext');
    
    var resev = [];
    const messages = [];
    let clickCount = -1;
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
      loadtextElement.textContent = 'ROS接続中'; // 表示を更新
//GASからのデータ取得
      const url = "https://script.google.com/macros/s/AKfycbyimWGncGFN334Mo5VX_FgehcU5wPyiDEVMB2I37PlJpkBfjw6__j7JE3dtWimv4vfhFQ/exec"; // GASのAPIのURL

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
          //console.log(resev); // {"status":"OK"}が返ってくる
          isgetdataElement.textContent = "取得済み";
        })
        .catch((e) => loadfinish());

    };
　
var ros = new ROSLIB.Ros({
          url: 'ws://localhost:9090'  //松嶋PCの仮想環境向け
          //url: 'ws://172.25.19.148:9090'　//その他デバイス向け
        });

        ros.on('connection', function() {
            console.log('Connected to rosbridge server');
	setTimeout(() => {
	    loadtextElement.textContent = 'ROS接続完了';
	      setTimeout(() => {
              loadtextElement.textContent = 'データ同期中';
              }, 500);
	}, 1000);// ロード表記更新までの遅延（ただの演出）
        });

        ros.on('error', function(error) {
            console.log('Error connecting to rosbridge server: ', error);
        });

        ros.on('close', function() {
            console.log('Connection to rosbridge server closed');
        });
　
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
	
     toggleFade();
}

  //画面ズームを禁止する
  document.addEventListener("gesturestart", (e) => {
  e.preventDefault();
  });


document.addEventListener('touchmove', function(event) {//画面スクロール禁止
    event.preventDefault();
}, { passive: false });


    function toggleFade() {//案内の進行
     if(messages.length - 1 > clickCount){
        textElement.classList.remove('show');
        textElement.classList.add('hide');

	if((clickCount >= 0) && (messages.length - 2 > clickCount))goalpose(resev[clickCount + 1].x,resev[clickCount + 1].y,resev[clickCount + 1].z,resev[clickCount + 1].w);//goal_poseトピックの送信

        setTimeout(() => {
        console.log("hide");
        //clickCount ++; // 配列の長さで循環
	let fontSize = Math.max(30, 68 - messages[clickCount].length * 2);
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

        clickCount ++;
     }
    }
