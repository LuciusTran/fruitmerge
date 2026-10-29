# Fruit Merge

Fruit Merge is a Unity puzzle game where you drop fruit, merge matching pairs, and make room for bigger combinations. Aim for a high score, unlock fruit skins, and decorate your room as you progress.

## How to Play

1. Select **PLAY** to start a game or **CONTINUE** to resume your saved board.
2. Click or touch the play area, drag left or right to aim, then release to drop a fruit.
3. Bring two fruits of the same level together to merge them into the next level. Work your way through all 11 fruit levels and build combos to increase your score.
4. Watch the **NEXT** preview and plan your drops to keep space available. Avoid letting the fruit pile reach the top of the board.
5. Use **CLEAN**, **BOMB**, **UPGRADE**, and **SHAKE** when you need help clearing space or setting up a merge. Bomb and Upgrade let you select a fruit on the board.

Use the pause button or press **Escape** to pause. Choose **RESUME** to keep playing or **NEW GAME** to start over. Your board, best score, and progression are saved locally.

Visit **SKINS**, **ROOMS**, and **REWARDS** from the home screen to customize your game and collect progression rewards.

## Setup

### Requirements

- Unity Hub
- Unity Editor **6000.4.12f1**
- Git

### Run in the Unity Editor

1. Clone the repository:

   ```bash
   git clone https://github.com/LuciusTran/fruitmerge.git
   ```

2. In Unity Hub, add the cloned `fruitmerge` folder as a project and open it with Unity **6000.4.12f1**.
3. Wait for Unity to resolve packages and finish importing assets.
4. Open `Assets/Recovery/Scenes/FruitMergePlayable.unity`.
5. Press **Play** in the Unity Editor, then select **PLAY** or **CONTINUE** in the game.

### Build a Standalone Player

1. Install the Unity build support module for your target platform through Unity Hub.
2. Open **File → Build Profiles** and select your target platform.
3. Make sure `Assets/Recovery/Scenes/FruitMergePlayable.unity` is enabled in the scene list.
4. Select **Build**, choose an output folder, and launch the generated player.
