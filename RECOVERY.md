# Fruit Merge Play Guide

Drop fruit, merge matching pairs, and aim for your best score. Unlock new skins and use your rewards to decorate rooms as you progress.

## Getting Started

1. Clone the project:

   ```bash
   git clone https://github.com/LuciusTran/fruitmerge.git
   ```

2. Add the `fruitmerge` folder in Unity Hub and open it with **Unity 6000.4.12f1**.
3. Wait for packages and assets to finish importing.
4. Open `Assets/Recovery/Scenes/FruitMergePlayable.unity` and press **Play**.
5. Select **PLAY** to start or **CONTINUE** to resume your saved board.

## Controls and Rules

- Click or touch the play area, drag left or right to aim, and release to drop your fruit.
- Match two fruits of the same level to create the next level. There are 11 fruit levels.
- Use the **NEXT** preview to plan your drops and leave space for larger fruits.
- Make consecutive merges to build combos and increase your score.
- Keep the pile below the top boundary. If fruit stays above the limit for too long, the game ends.
- Press **Escape** or select the pause button to pause, then choose **RESUME** to continue.

## Tools

| Tool | Effect |
| --- | --- |
| **CLEAN** | Removes fruit from the first two levels to free up space. |
| **BOMB** | Removes a fruit you select on the board. |
| **UPGRADE** | Raises a selected fruit by one level, up to the highest level. |
| **SHAKE** | Shakes the board to move fruit and help matching pairs meet. |

For Bomb and Upgrade, select a fruit after choosing the tool, or press **CANCEL** to return to normal play. Tool counts appear below the buttons; when a tool runs out, using it costs **5 tickets**. Each merge earns **1 ticket**.

## Progress and Customization

- **SKINS:** Browse fruit styles and select unlocked skins.
- **ROOMS:** Spend coins to add decorations and progress through rooms.
- **REWARDS:** Check tasks and collect daily login rewards.
- **SETTINGS:** Adjust sound options.

Your board, best score, selected skin, currencies, and progression are saved locally. After a game ends, choose **REVIVE** when available to continue once, or **NEW GAME** to start again.

For standalone build instructions, see the [README](README.md#build-a-standalone-player).
