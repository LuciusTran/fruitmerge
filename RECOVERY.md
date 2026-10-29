# Ghi chú kỹ thuật Fruit Merge

Mở folder `fruitmerge` bằng Unity **6000.4.12f1**. Mở scene
`Assets/Recovery/Scenes/FruitMergePlayable.unity`, nhấn **Play**, rồi **PLAY/CONTINUE**.
Bản export tham chiếu ban đầu được giữ riêng ngoài repository này.

## Phạm vi đã nối thành luồng chơi

- Menu → chơi → tạm dừng → tiếp tục → thua → hồi sinh một lần → chơi lại/menu.
- Kéo chuột/chạm và thả; 11 cấp quả, xem quả tiếp theo, va chạm Physics2D, merge,
  cộng điểm, combo, cảnh báo quá vạch và kết thúc lượt.
- Lưu/khôi phục bàn chơi, điểm cao, skin, ticket, coin, vật phẩm và tiến trình phòng.
- Clean, bomb, upgrade, shake. Bomb/upgrade cần chọn một quả; có nút hủy.
- 9 bộ hình skin. Các ngưỡng Score/Room/Task đọc từ cấu hình gốc;
  skin rank cần dịch vụ chưa phục hồi. Capybara có trong thưởng ngày 15.
- 32 prefab phòng; mua lần lượt đồ trang trí theo `Room.json` và lưu tiến trình.
- Nhiệm vụ theo `TaskData.json`, thưởng đăng nhập theo `DailyReward.json`.
- Nhạc và âm thanh trích xuất, công tắc âm thanh, bố cục dọc có căn giữa trên desktop.

## Code nào lấy từ dịch ngược

`Assets/Scripts/Assembly-CSharp/FruitItem.cs` và `MergeFruit.cs` giữ class/field,
chữ ký và GUID MonoScript của bản export. Các thân hàm đã phục hồi có comment
chỉ tới file native. Danh sách tương ứng nằm tại
`Evidence/csharp-restoration-map.json`, mã native tại `DecompiledNative`.

Các quy tắc đã đối chiếu trực tiếp:

- `CanMerge`: cùng loại, cả hai chưa merged; 484 tổ hợp đã chạy trên ARM64 gốc.
- Random quả đầu vào: `Random.Range(0, 5)`; thời gian tạo sau thả: 0,3 giây;
  vận tốc ban đầu thả: `Vector2.down * 8`.
- Merge tại trung điểm, tăng một cấp; hai quả cấp cuối biến mất.
- Điểm lấy từ prefab quả mới: `1,3,6,10,15,21,27,36,42,48`.
- Cửa sổ combo 1 giây; cảnh báo quá vạch 0,5 giây, thua sau 3,5 giây.
- Điều kiện vượt vạch: `sprite.bounds.max.y - deadline > sprite.bounds.size.y * .75`.
- Clean xóa hai cấp đầu; revive xóa quả chạm/vượt ClearLine; upgrade tăng một cấp.

Đây là **C# tái dựng từ bằng chứng native**, không phải source C# nguyên bản.
Những method export chưa có trong danh sách phục hồi vẫn là stub và không được
luồng host mới gọi. Không dùng các DLL metadata làm bằng chứng khôi phục thân hàm.

## Phần tích hợp và giới hạn

`Assets/Recovery/RecoveredGameFlow*.cs` là host và UI được viết để nối logic đã
dịch ngược thành game chạy được. UI dùng IMGUI của Unity, không phụ thuộc các DLL
UGUI/TMP/DOTween đã bị xuất thành stub. Bạn có thể thay host UI bằng Canvas sau này.

- Lưu profile JSON riêng tại `Application.persistentDataPath/recovered-profile.json`;
  không dùng save của game Android gốc. Ghi qua file tạm và thay thế file.
- Mỗi merge nhận 1 ticket; refill công cụ giá 5 ticket. Đây là chính sách cục bộ
  để có vòng chơi liên tục, chưa xác minh tương đương kinh tế của game gốc.
- Thưởng/nhiệm vụ lấy giá trị trong JSON gốc, nhưng lịch UTC, luồng claim, thứ tự
  nhiệm vụ lặp và nối tiến trình skin là phần tích hợp chưa xác minh toàn bộ native.
- Shake dùng lực Physics2D; pop/sparkle dùng coroutine. Đây là các xấp xỉ thay cho
  chuỗi tween/effect chưa giải đầy đủ.
- Skin có collider phụ thì sử dụng; nếu prefab không có mesh phụ, giữ collider
  tròn gốc. Chuyển động/collider skin đặc biệt chưa chứng minh giống hoàn toàn.
- Phòng được phục hồi phần trang trí tĩnh; Spine, bóng đổ và animation xây phòng
  chưa tương đương game gốc. Một số lớp ảnh có thể phụ thuộc animation chưa phục hồi.
- Ads, IAP, analytics, bảng xếp hạng/server và daily quest tổng hợp chưa được nối.

Trong Play Mode chọn **Recovered Game Host**, bật `Developer Unlocks` để thử skin,
phòng và công cụ không cần tích lũy. Đây là công tắc phát triển, không thay cấu hình APK.

## Các điểm để phát triển tiếp

- `FruitItem.cs`: luật merge, cảnh báo thua, điểm và trạng thái quả.
- `MergeFruit.cs`: điều khiển, spawn, save board, revive và công cụ.
- `*.Recovered.cs` cùng thư mục: API nối host, chọn mục tiêu, hiệu ứng thay thế.
- `Assets/Recovery/RecoveredGameFlow.cs`: menu, HUD, âm thanh, phòng, skin, profile.
- `RecoveredGameFlow.Progression.cs`: nhiệm vụ/thưởng theo cấu hình gốc.
- `RecoveredCatalog.asset` trong Resources: prefab game/phòng, JSON, font, âm thanh.
- Menu Unity **Fruit Merge → Prepare Project**: tái tạo catalog/scene khi cần.
  Thao tác này ghi lại scene phục hồi; lưu scene tùy chỉnh dưới tên khác trước khi chạy.

## Build và kiểm thử

Build Linux được tạo tại `Builds/Linux/FruitMerge`; bản build không được commit.
`RecoveredProjectBuilder.BuildLinux` dựng lại player bằng Unity batchmode.
Chạy player với `--recovery-test --report /absolute/path/report.json` để chạy
kiểm thử va chạm, tính điểm, save/load, skin, công cụ, pause, game over, revive,
restart, cấp cuối, phòng và tiến trình. Profile kiểm thử tách riêng khỏi profile chơi.
Thêm `-batchmode -nographics` để kiểm tra không cần cửa sổ.

Báo cáo thật nằm tại `Evidence/unity-player-smoke.json`; lượt chạy có đồ họa tại
`Evidence/player-visual-smoke.json`.
Build và kiểm thử desktop chưa xác minh build Android hay độ tương đương toàn game.
Đã qua 24 kiểm tra trong mỗi lượt player, gồm 484 tổ hợp CanMerge và điểm của cả
10 bước nâng cấp quả. Các lượt thả tự động gọi controller; phép thử con trỏ X11
không xác minh được vì desktop không chuyển tiếp lệnh XTest di chuyển chuột.
Giới hạn này nằm tại `Evidence/player-pointer-test.json`; không tính là kiểm
thử chuột/chạm thành công.
