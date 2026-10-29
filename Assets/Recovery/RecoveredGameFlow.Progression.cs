using System;
using UnityEngine;

// Original JSON supplies targets/rewards. Local claiming and UI are reconstructed.
public partial class RecoveredGameFlow
{
    [Serializable] public class RewardData
    {
        public int day, coin, clean, bomb, upgrade, shake;
        public string skin;
    }
    [Serializable] public class TaskTarget
    {
        public int TargetGrade, TargetNum, RewardCoin, RewardSkinProgress;
    }
    [Serializable] private class RewardWrapper { public RewardData[] Items; }
    [Serializable] private class TaskWrapper { public TaskTarget[] TaskItems; }
    private RewardData[] dailyRewards;
    private TaskTarget[] taskTargets;
    private static string Today => DateTime.UtcNow.ToString("yyyy-MM-dd");
    private void LoadProgression()
    {
        dailyRewards = JsonUtility.FromJson<RewardWrapper>("{\"Items\":" + Resources.Load<TextAsset>("config/DailyReward").text + "}").Items;
        taskTargets = JsonUtility.FromJson<TaskWrapper>(Resources.Load<TextAsset>("config/TaskData").text).TaskItems;
        if (Profile.tools == null || Profile.tools.Length != 4) Profile.tools = new int[4];
        Profile.unlockedSkins ??= new System.Collections.Generic.List<string>();
        Profile.taskIndex = Mathf.Max(0, Profile.taskIndex);
        Profile.dailyDay = Mathf.Clamp(Profile.dailyDay, 0, dailyRewards.Length - 1);
    }
    public void RecordTaskFruit(int grade)
    {
        var task = taskTargets[Profile.taskIndex % taskTargets.Length];
        if (grade == task.TargetGrade && Profile.taskCount < task.TargetNum) { Profile.taskCount++; SaveProfile(); }
    }
    public bool ClaimTask()
    {
        var task = taskTargets[Profile.taskIndex % taskTargets.Length];
        if (Profile.taskCount < task.TargetNum) return false;
        Profile.coins += task.RewardCoin; Profile.taskSkinProgress += task.RewardSkinProgress;
        Profile.taskIndex++; Profile.taskCount = 0; SaveProfile(); PlaySound("collect_coins"); return true;
    }
    public bool ClaimDaily()
    {
        if (Profile.dailyClaim == Today) return false;
        var reward = dailyRewards[Profile.dailyDay];
        Profile.coins += reward.coin;
        Profile.tools[0] += reward.clean; Profile.tools[1] += reward.bomb;
        Profile.tools[2] += reward.upgrade; Profile.tools[3] += reward.shake;
        if (!string.IsNullOrEmpty(reward.skin) && !Profile.unlockedSkins.Contains(reward.skin)) Profile.unlockedSkins.Add(reward.skin);
        Profile.dailyClaim = Today; Profile.dailyDay = Mathf.Min(Profile.dailyDay + 1, dailyRewards.Length - 1);
        SaveProfile(); Notice("Daily reward collected"); return true;
    }
    private void DrawProgression()
    {
        Panel(0,0,540,960); Label(20,45,500,65,"REWARDS",title);
        Label(20,120,500,42,"Coins " + Profile.coins + "   ·   Tickets " + Profile.tickets,heading);
        var reward = dailyRewards[Profile.dailyDay];
        Label(40,205,460,48,"Daily login · day " + reward.day,heading);
        string contents = reward.coin > 0 ? reward.coin + " coins" : !string.IsNullOrEmpty(reward.skin) ? reward.skin + " skin" : "Tools: " + reward.clean + " clean / " + reward.bomb + " bomb / " + reward.upgrade + " upgrade / " + reward.shake + " shake";
        Label(50,265,440,68,contents,text);
        Button(65,350,410,55,Profile.dailyClaim == Today ? "COLLECTED TODAY" : "CLAIM DAILY",() => ClaimDaily());
        var task = taskTargets[Profile.taskIndex % taskTargets.Length];
        Label(30,455,480,48,"Fruit task " + (Profile.taskIndex + 1),heading);
        FruitIcon(new Rect(75,525,90,90),task.TargetGrade-1);
        Label(185,520,300,80,Profile.taskCount + " / " + task.TargetNum + " fruit\nReward " + task.RewardCoin + " coins",text);
        Label(50,630,440,40,"Skin progress " + Profile.taskSkinProgress,small);
        Button(65,700,410,55,"CLAIM TASK",() => { if (!ClaimTask()) Notice("Keep dropping and merging target fruit"); });
        Button(65,850,410,55,"HOME",GoHome);
    }
}
