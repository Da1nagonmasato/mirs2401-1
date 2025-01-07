
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
            }[latestStatus] || "INVALID STATUS";

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
    console.log('Goal pose published');
  }

    openMapButton.addEventListener('click', () => {
      mapModal.style.display = 'flex';
      setTimeout(() => {
        map.invalidateSize(); // モーダル表示後に地図サイズを再計算
        if (lastBounds) {
          map.fitBounds(lastBounds); // 地図をズーム
        }
      }, 0); // 次のリペイントタイミングで実行
    });

    closeModalButton.addEventListener('click', () => {
      mapModal.style.display = 'none';
    });

    // 地図の初期化
    const map = L.map('map').setView([0, 0], 13); // 初期位置を広域に設定
    const mapLayer = L.layerGroup().addTo(map); // カスタム地図レイヤー
    let robotMarker; // ロボットの現在位置マーカー
    let lastBounds = null; // 最新の地図の境界を保持


    // 地図トピックからデータを取得
    const mapTopic = new ROSLIB.Topic({
      ros: ros,
      name: '/map', // Nav2で使用中の地図トピック
      messageType: 'nav_msgs/OccupancyGrid'
    });

    mapTopic.subscribe((message) => {
      console.log('Received map data');
      const width = message.info.width;
      const height = message.info.height;
      const resolution = message.info.resolution;
      const origin = message.info.origin.position;

      // OccupancyGridデータを画像化
      const canvas = document.createElement('canvas');
      canvas.width = width;
      canvas.height = height;
      const ctx = canvas.getContext('2d');
      const imageData = ctx.createImageData(width, height);

      for (let i = 0; i < message.data.length; i++) {
        const value = message.data[i];
        const color = value === -1 ? 255 : 255 - (value * 255) / 100; // グレースケール化
	      //
	  const row = Math.floor(i / width);
  const col = i % width;

  // Y軸を反転して描画
        const flippedRow = height - row - 1;
        const flippedIndex = flippedRow * width + col;

        imageData.data[i * 4] = color;      // R
        imageData.data[i * 4 + 1] = color; // G
        imageData.data[i * 4 + 2] = color; // B
        imageData.data[i * 4 + 3] = 255;   // Alpha
      }

      ctx.putImageData(imageData, 0, 0);

      // 地図画像をLeafletに追加
      const bounds = [
        [origin.y, origin.x], // 左下の座標
        [origin.y + height * resolution, origin.x + width * resolution] // 右上の座標
      ];

      const img = L.imageOverlay(canvas.toDataURL(), bounds);

      mapLayer.clearLayers(); // 既存の地図をクリア
      mapLayer.addLayer(img); // 新しい地図を追加

      lastBounds = bounds; // 最新の地図範囲を保持
    });

    // 現在位置トピック
    const poseTopic = new ROSLIB.Topic({
      ros: ros,
      name: '/amcl_pose', // 現在位置トピック
      messageType: 'geometry_msgs/PoseWithCovarianceStamped'
    });

    poseTopic.subscribe((message) => {
      const position = message.pose.pose.position;
      const x = position.x;
      const y = position.y - 1;

      console.log(`現在位置: x=${x}, y=${y}`);

      // ロボットの位置を更新
      if (robotMarker) {
        robotMarker.setLatLng([y, x]);
      } else {
        robotMarker = L.marker([y, x]).addTo(map);
      }
    });
