
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
