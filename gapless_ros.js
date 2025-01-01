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
