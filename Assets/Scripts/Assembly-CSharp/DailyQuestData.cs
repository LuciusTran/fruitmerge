using System.Collections.Generic;

public class DailyQuestData
{
	public Dictionary<string, int> taskScoreRule;

	public List<DailyQuestReward> dailyQuestReward;

	public List<int> dailyQuestTask;

	public List<DailyTaskModel> dailyTask;

	public List<int> todayTaskId;

	public List<int> todayClaimRewardList;

	public int dailyFinishNum;
}
