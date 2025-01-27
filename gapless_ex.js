        const imageUrls = [
            './使用法1.png',
            './使用法2.png',
            './使用法3.png',
	    './gaprisu.png'
        ];

        const showImageBtn = document.getElementById('show-image-btn');
        const modal = document.getElementById('imageModal');
        const modalImg = modal.querySelector('.modal-image');
        const closeBtn = document.querySelector('.close');
        const prevBtn = document.querySelector('.prev');
        const nextBtn = document.querySelector('.next');

        let currentImageIndex = 0;
        let startX = 0;
        let currentX = 0;


        // ボタンクリックで直接モーダル表示
        /*showImageBtn.addEventListener('click', () => {
            showImage(currentImageIndex);
            modal.style.display = 'block';
        });*/

/*	showImageBtn.addEventListener('touchstart', (e) => {
    // タッチイベントを処理するコード
            showImage(currentImageIndex);
            modal.style.display = 'block';
        }, { passive: true });*/

	function showex(){
            showImage(currentImageIndex);
            modal.style.display = 'block';
	}

        // 画像表示を更新
        function showImage(index) {
            currentImageIndex = index;
            modalImg.src = imageUrls[index];
        }

        // 前の画像を表示
        function showPrevImage() {
            currentImageIndex = (currentImageIndex - 1 + imageUrls.length) % imageUrls.length;
            showImage(currentImageIndex);
        }

        // 次の画像を表示
        function showNextImage() {
            currentImageIndex = (currentImageIndex + 1) % imageUrls.length;
            showImage(currentImageIndex);
        }

        // ナビゲーションボタンのイベント
        prevBtn.addEventListener('click', showPrevImage);
        nextBtn.addEventListener('click', showNextImage);

        // モーダルを閉じる
        closeBtn.addEventListener('click', () => {
            modal.style.display = 'none';
        });

        // タッチイベントの処理
        modal.addEventListener('touchstart', (e) => {
            startX = e.touches[0].clientX;
            currentX = startX;
        });

        modal.addEventListener('touchmove', (e) => {
            currentX = e.touches[0].clientX;
        });

        modal.addEventListener('touchend', () => {
            const diffX = currentX - startX;
            if (Math.abs(diffX) > 50) {
                if (diffX > 0) {
                    showPrevImage();
                } else {
                    showNextImage();
                }
            }
        });

        // キーボードナビゲーション
        document.addEventListener('keydown', (e) => {
            if (modal.style.display === 'block') {
                if (e.key === 'ArrowLeft') {
                    showPrevImage();
                } else if (e.key === 'ArrowRight') {
                    showNextImage();
                } else if (e.key === 'Escape') {
                    modal.style.display = 'none';
                }
            }
        });
