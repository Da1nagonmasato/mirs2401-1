
let current_pose = {Pos_x:0.0,Pos_y:0.0,Pos_z:0.0,Ang_x:0.0,Ang_y:0.0,Ang_z:0.0,Ang_w:0.0};

var goalPose = new ROSLIB.Topic({//goal_poseのパブリッシシャーの作成
            ros: ros,
            name: '/goal_pose', // ナビゲーション目標のトピック名
            messageType: 'geometry_msgs/PoseStamped'
        });

function goalpose(x,y,z,w){//goal_poseトピックの送信
            var goalMsg = new ROSLIB.Message({
                header: {
                    stamp: { sec: 0, nsec: 0 },  // 時間のスタンプ
                    frame_id: 'map'  // フレームID（マップ基準）
                },
                pose: {
                    position: {
                        x: x,  // ユーザー指定のx座標
                        y: y,  // ユーザー指定のy座標
                        z: 0.0
                    },
                    orientation: {
                        x: 0.0,
                        y: 0.0,
                        z: z,
                        w: w
                    }
                }
            });

             // トピックにメッセージを送信
             goalPose.publish(goalMsg);
            console.log('goal pose sent: ', goalMsg);

        }

// Subscribe to /amcl_poseのサブスクライバーの作成
        const amclPoseTopic = new ROSLIB.Topic({
            ros: ros,
            name: '/amcl_pose',
            messageType: 'geometry_msgs/PoseWithCovarianceStamped'
        });


amclPoseTopic.subscribe((message) => {//amcl_poseのサブスクライブ


           const position = message.pose.pose.position;
           const orientation = message.pose.pose.orientation;

           current_pose = {
                           Pos_x:position.x,
                           Pos_y:position.y,
                           Pos_z:position.z,
                           Ang_x:orientation.x,
                           Ang_y:orientation.y,
                           Ang_z:orientation.z,
                           Ang_w:orientation.w
                       }
             console.log(current_pose);

            // Display the pose
           /* document.getElementById('pose').innerText = `
                Position:
                x = ${position.x.toFixed(2)},
                y = ${position.y.toFixed(2)},
                z = ${position.z.toFixed(2)}

                Orientation:
                x = ${orientation.x.toFixed(2)},
                y = ${orientation.y.toFixed(2)},
                z = ${orientation.z.toFixed(2)},
                w = ${orientation.w.toFixed(2)}
            `;*/
        });

// Subscribe to /navigate_to_pose/_action/statusトピックのサブスクライバーの作成
        const statusTopic = new ROSLIB.Topic({
            ros: ros,
            name: '/navigate_to_pose/_action/status',
            messageType: 'action_msgs/GoalStatusArray'
        });


        statusTopic.subscribe((message) => {// /navigate_to_pose/_action/statusトピックのサブスクライブ
            const statusList = message.status_list;
            if (statusList.length === 0) {
                document.getElementById('status').innerText = "No active goals.";
                return;
            }

            const latestStatus = statusList[statusList.length - 1].status;

            // Convert status code to readable text
            const statusText = {
                0: "UNKNOWN",
                1: "ACCEPTED",
                2: "EXECUTING",
                3: "CANCELING",
                4: "SUCCEEDED",
                5: "CANCELED",
                6: "ABORTED"
            }[latestStatus] || "INVALID STATUS";//succeededになったらnavigating = false;にする
		//
		if(statusText == "SUCCEEDED"){
			if(navigating == true){
				console.log(clickCount);
				console.log(resev.length);
			 if(resev.length == clickCount + 1){
				 const startmess = "案内を完了しました。お疲れ様でした。気を付けてお帰りください";
                         addMessage(startmess, 0);
                         speakResponse(startmess);
                                navButton.disabled = false;
			 }else{
                         const startmess = "案内を完了しました。次の目的地は" + resev[clickCount + 1].location + "です。次の案内は次の案内ボタンを押してください。";
			 addMessage(startmess, 0);
                         speakResponse(startmess);
				navButton.disabled = false;
			 }
			}
                navigating = false;

		}

            document.getElementById('status').innerText = `Status: ${statusText}`;
        });


            function sendstopGoal() {//現在位置を新たにgole_poseとして送信し、疑似的に案内の停止をする
                                 const poseMsg = new ROSLIB.Message({
    header: {
      frame_id: 'map',
      stamp: {
        sec: Math.floor(Date.now() / 1000),
        nanosec: (Date.now() % 1000) * 1000000
      }
    },
    pose: {
      position: {
        x: current_pose.Pos_x,
        y: current_pose.Pos_y,
        z: current_pose.Pos_z
      },
      orientation: {
        x: current_pose.Ang_x,
        y: current_pose.Ang_y,
        z: current_pose.Ang_z,
        w: current_pose.Ang_w
      }
    }
  });
    goalPose.publish(poseMsg);
		    animateText('navigation suspended');
    console.log('Goal pose published');
		    navigating = false;
		    restartButton.style.display = 'flex';
		    navButton.style.display = 'none';

  }

function restart(){
restartButton.style.display = 'none';
navigating = true;
	navButton.style.display = 'flex';
	
if((clickCount >= 0) && (messages.length - 1 > clickCount))goalpose(resev[clickCount].x,resev[clickCount].y,resev[clickCount].z,resev[clickCount].w);
}

        let mapResolution = 0.05; // デフォルトの解像度 (1ピクセルあたりのメートル)
    let mapOrigin = [-10, -10]; // デフォルトの原点 (x, y)

    // Leaflet地図の初期化
    const map = L.map('map', {
      crs: L.CRS.Simple, // Nav2地図を平面座標系として扱う
      minZoom: -5,
      maxZoom: 5,
    });

    // 地図情報を取得 (/map)
    const mapTopic = new ROSLIB.Topic({
      ros: ros,
      name: '/map',
      messageType: 'nav_msgs/OccupancyGrid',
    });

    mapTopic.subscribe((message) => {
      console.log('Map data received.');
//alert('Map data received.');
      // 地図データをCanvasに描画
      const width = message.info.width;
      const height = message.info.height;
      mapResolution = message.info.resolution;
      mapOrigin = [
        message.info.origin.position.x,
        message.info.origin.position.y,
      ];

      const canvas = document.createElement('canvas');
      canvas.width = width;
      canvas.height = height;
      const ctx = canvas.getContext('2d');
      const imageData = ctx.createImageData(width, height);

      // OccupancyGridデータを画像に変換（上下反転）
      const data = message.data;
      for (let y = 0; y < height; y++) {
        for (let x = 0; x < width; x++) {
          const i = x + (height - y - 1) * width; // 上下反転
          const value = data[i];
          const color = value === -1 ? 128 : value === 100 ? 0 : 255; // 不明:灰色, 障害物:黒, 空白:白
          const index = (y * width + x) * 4;
          imageData.data[index] = color;     // R
          imageData.data[index + 1] = color; // G
          imageData.data[index + 2] = color; // B
          imageData.data[index + 3] = 255;   // Alpha
        }
      }
      ctx.putImageData(imageData, 0, 0);

      // Leaflet地図に追加
      const mapImageUrl = canvas.toDataURL();
      const southWest = L.latLng(
        mapOrigin[1],
        mapOrigin[0]
      );
      const northEast = L.latLng(
        mapOrigin[1] + height * mapResolution,
        mapOrigin[0] + width * mapResolution
      );
      const imageBounds = [southWest, northEast];
      L.imageOverlay(mapImageUrl, imageBounds).addTo(map);
      map.fitBounds(imageBounds);
    });

    // Nav2の現在地情報を購読 (/amcl_pose)
    const poseTopic = new ROSLIB.Topic({
      ros: ros,
      name: '/amcl_pose',
      messageType: 'geometry_msgs/PoseWithCovarianceStamped',
    });

    let currentMarker = null;

    poseTopic.subscribe((message) => {
      const position = message.pose.pose.position;
      const latitude = position.y; // Y軸を緯度として計算
      const longitude = position.x; // X軸を経度として計算

      console.log(`現在地: 緯度=${latitude}, 経度=${longitude}`);

      // 現在地マーカーを更新
      if (currentMarker) {
        map.removeLayer(currentMarker);
      }
      currentMarker = L.marker([latitude, longitude]).addTo(map)
        .bindPopup(`現在地<br>緯度: ${latitude.toFixed(2)}<br>経度: ${longitude.toFixed(2)}`);

      // 現在地を中心に移動
      map.setView([latitude, longitude], map.getZoom());
    });

    // ボタンをクリックしたときにモーダルを表示
    const showMapBtn = document.getElementById('showMapBtn');
    const mapmodal = document.getElementById('mapModal');
    const mapcloseBtn = document.querySelector('.mapclose');

    // モーダルを表示
    showMapBtn.onclick = function() {
      mapmodal.style.display = 'block';

        // モーダルが表示された後に地図サイズを再計算
  map.invalidateSize();
  
  // 現在地を中心に地図を再調整
  const currentCenter = map.getCenter();
  map.setView(currentCenter, 3); // ズームレベルを15に設定（適宜調整）
    }

    // モーダルを閉じる
    mapcloseBtn.onclick = function() {
      mapmodal.style.display = 'none';
    }

    // モーダル外の部分をクリックした場合にも閉じる
    window.onclick = function(event) {
      if (event.target === mapmodal) {
        mapmodal.style.display = 'none';
      }
    }
