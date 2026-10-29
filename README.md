# Fruit Merge

Game ghép trái cây bằng Unity, gồm luật va chạm/ghép quả, tính điểm, skin, trang trí phòng và lưu tiến trình.

## Mở và chơi

1. Clone repository rồi mở folder `fruitmerge` bằng **Unity 6000.4.12f1** qua Unity Hub.
2. Chờ Unity tải packages và import assets ở lần mở đầu.
3. Mở scene `Assets/Recovery/Scenes/FruitMergePlayable.unity`.
4. Nhấn **Play**, chọn **PLAY/CONTINUE**, kéo chuột hoặc chạm rồi thả để thả quả.

Không cần cài REA, Ghidra hoặc có APK trên máy để chạy project này. Các file `.meta` được giữ cùng assets để bảo toàn GUID và liên kết prefab/scene.

## Tính năng

- 11 cấp trái cây, ghép bằng Physics2D, điểm/combo và cảnh báo quá vạch.
- Menu, tạm dừng, tiếp tục, thua, hồi sinh và chơi lại.
- Lưu/khôi phục bàn chơi, điểm cao và tiến trình.
- Skin, phòng trang trí, nhiệm vụ và thưởng đăng nhập.
- Công cụ clean, bomb, upgrade, shake cùng âm thanh.

Chọn **Recovered Game Host** trong scene và bật `Developer Unlocks` để thử nội dung trong lúc phát triển.

## Phát triển và build

- Gameplay: `Assets/Scripts/Assembly-CSharp/FruitItem.cs`, `MergeFruit.cs` và các file `*.Recovered.cs`.
- UI và luồng chơi: `Assets/Recovery/RecoveredGameFlow*.cs`.
- Cấu hình/prefab/âm thanh được nối qua `Assets/Resources/RecoveredCatalog.asset`.
- **Fruit Merge → Prepare Project** tạo lại catalog và scene mặc định; lưu scene tùy chỉnh bằng tên khác trước khi chạy.
- Build bằng Unity **Build Profiles**, hoặc gọi `RecoveredProjectBuilder.BuildLinux` trong batch mode. Bản Linux xuất vào `Builds/Linux/FruitMerge`.

Project có kiểm thử tích hợp trong player qua `--recovery-test --report /absolute/path/report.json`. Có thể thêm `-batchmode -nographics`. Cache, bản build và cấu hình riêng của máy không được đưa lên Git.

## Ghi chú kỹ thuật

Assets được trích xuất từ gói Fruit Merge 3.9 đã cung cấp. Gameplay C# được tái dựng dựa trên phân tích native; host/UI và một số phần tích hợp được viết để nối thành luồng chơi. Đây không phải source C# nguyên bản hoặc bản tương đương hoàn toàn của game gốc.

Xem [ghi chú triển khai và giới hạn](RECOVERY.md), [ánh xạ các hàm C#](Evidence/csharp-restoration-map.json) và [mã giả native tham chiếu](DecompiledNative/INDEX.md).

Project đã được import mới, build bằng Unity 6000.4.12f1 và qua 24 kiểm tra tích hợp trong player Linux. Kết quả riêng cho checkout này nằm tại [publication-verification.json](Evidence/publication-verification.json) và [publication-player-smoke.json](Evidence/publication-player-smoke.json). Android, thao tác chuột/chạm thực tế và độ tương đương toàn bộ animation/UI chưa được xác minh.
