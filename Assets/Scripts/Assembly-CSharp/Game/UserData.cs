using System.Collections.Generic;
using UnityEngine;

namespace Game
{
	public class UserData : Singleton<UserData>
	{
		private const int TaskCountByOrder = 8;

		public float CurrentTaskPlayTime;

		public int CurrentTaskPlayClickNumber;

		public LeagueItemData LeagueItemData;

		public DataManager.PlayerLeagueData PlayerLeagueData;

		public int UnlockRank;

		public string UnlockRankSkinName;

		public int BlinkMin
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int BlinkMax
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public bool IsHadSubScriptionSuccessed
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool CurrentUserIsExecuteTKLog
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool OpenTextLogForRelease
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public string AdjustNetwork
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public string AdjustCampaign
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public string AdjustAdgroup
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public string AdjustAdid
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public int WatchVideoCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int PlayGameCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public float TotalAdValue
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public int TotalAdCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int StartIntAdCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int CurrentTaskCompletedNum
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int CurrentTaskSkinGainProgress
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int CompletedTaskCountInLevel
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int CurrentTaskDuration
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int CurrentTaskClickNumber
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public bool HasRecordEnableTask => false;

		public bool EnableTask
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public string WaitUnlockScoreSkin { get; set; }

		public List<RoomRewardModel> WaitRewardList
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public int LastWeekRank
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int LastWeekTargetNum
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int LastWeekTargetId
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int LeagueTotalCount { get; set; }

		public int LastLeagueRank
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int LastLeagueScore
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int GetHistoryUnlockGrade()
		{
			return 0;
		}

		public void SaveHistoryUnlockGrade(int grade)
		{
		}

		public void ResetHistoryUnlockGrade()
		{
		}

		public void SetHistoryScore(int score)
		{
		}

		public int GetHistoryScore()
		{
			return 0;
		}

		public void SaveCurrentScore(int score)
		{
		}

		public int GetCurrentScore()
		{
			return 0;
		}

		public int GetTotalLevels()
		{
			return 0;
		}

		public void AddLevel()
		{
		}

		public int GetPlayLevelUseTime(int lastPlayLevel)
		{
			return 0;
		}

		public void ResetCurrentPlayLevelData(int lastPlayLevel)
		{
		}

		public void RecordStartPlayLevelData()
		{
		}

		public void RecordQuitPlayLevelData(int lastPlayLevel)
		{
		}

		public void IncrementGamesWithoutBuild()
		{
		}

		public void ResetGamesWithoutBuild()
		{
		}

		public bool CanBuildCurrentRoomItem(int pendingTickets = 0)
		{
			return false;
		}

		public bool ShouldSmartJumpToRoom(int pendingTickets = 0)
		{
			return false;
		}

		public bool GetRoomStagedRewardCollected(string roomName, int stage)
		{
			return false;
		}

		public void SetRoomStagedRewardCollected(string roomName, int stage)
		{
		}

		public int GetExp()
		{
			return 0;
		}

		public void AddExp(int num)
		{
		}

		private void LogLevelUp()
		{
		}

		public int GetExpLevelUseTime(int lastExpLevel)
		{
			return 0;
		}

		public int GetLevelClick(int lastExpLevel)
		{
			return 0;
		}

		public void AddLevelClick()
		{
		}

		public int GetLevelMerge(int lastExpLevel)
		{
			return 0;
		}

		public void AddLevelMerge()
		{
		}

		public void AddLevelMergeScore(int score)
		{
		}

		public int GetLevelMergeScore(int lastExpLevel)
		{
			return 0;
		}

		public void RecordStartExpLevelData()
		{
		}

		public void RecordQuitExpLevelData(int lastExpLevel)
		{
		}

		public int GetExpLevel()
		{
			return 0;
		}

		public int GetDiamonds()
		{
			return 0;
		}

		public void AddDiamonds(int num)
		{
		}

		public void UseDiamonds(int num)
		{
		}

		public void AddDiamondsWithoutBroadcast(int num)
		{
		}

		public int GetTickets()
		{
			return 0;
		}

		public void SetTickets(int num)
		{
		}

		public void AddTickets(int num)
		{
		}

		public void UseTickets(int num)
		{
		}

		public void UseTicketsWithoutBroadcast(int num)
		{
		}

		public void AddTicketsWithoutBroadcast(int num)
		{
		}

		public void AddCleanTool(int num)
		{
		}

		public void UseCleanTool(int num)
		{
		}

		public int GetCleanToolNum()
		{
			return 0;
		}

		public void AddBombTool(int num)
		{
		}

		public void UseBombTool(int num)
		{
		}

		public int GetBombToolNum()
		{
			return 0;
		}

		public void AddUpgradeTool(int num)
		{
		}

		public void UseUpgradeTool(int num)
		{
		}

		public int GetUpgradeToolNum()
		{
			return 0;
		}

		public void AddShakeTool(int num)
		{
		}

		public void UseShakeTool(int num)
		{
		}

		public int GetShakeToolNum()
		{
			return 0;
		}

		public void RecordOnceGameData()
		{
		}

		public void LoadLastGameData()
		{
		}

		public void ClearLastGameData()
		{
		}

		public string UserAvatar()
		{
			return null;
		}

		public void SaveAvatar(int index)
		{
		}

		public string UserName()
		{
			return null;
		}

		public void SaveUserName(string name)
		{
		}

		public string RandomName()
		{
			return null;
		}

		public void SaveRoomStartTime(string roomName)
		{
		}

		public long GetRoomUseTime(string roomName)
		{
			return 0L;
		}

		public bool HasRoomTaskStarted(string roomName, string taskName)
		{
			return false;
		}

		public void SaveRoomTaskStartTime(string roomName, string taskName)
		{
		}

		public long GetRoomTaskUseTime(string roomName, string taskName)
		{
			return 0L;
		}

		public RoomModel GetCurrentRoomModel()
		{
			return null;
		}

		public bool IsRoomFinished(string roomName)
		{
			return false;
		}

		public void SaveRoom(string roomName)
		{
		}

		public List<string> GetRoomNames()
		{
			return null;
		}

		public int GetRoomLevel()
		{
			return 0;
		}

		public bool IsTodayStarterPackShown()
		{
			return false;
		}

		public void SaveLastShowStarterPack()
		{
		}

		public bool IsTodayRemoveAdShown()
		{
			return false;
		}

		public void SaveLastShowRemoveAd()
		{
		}

		public bool NeedShowDailyReward()
		{
			return false;
		}

		public bool IsFirstShowDailyReward()
		{
			return false;
		}

		public bool IsTodayDailyRewardShown()
		{
			return false;
		}

		public void SaveLastShowDailyReward()
		{
		}

		public bool IsTodaySubscriptionDailyClaimed()
		{
			return false;
		}

		public void SaveSubscriptionDailyClaimed()
		{
		}

		public void ClaimDailyReward(int day)
		{
		}

		public int GetClaimedDailyRewardDay()
		{
			return 0;
		}

		public bool IsTodayDailyRewardCollected()
		{
			return false;
		}

		public int GetDailyTaskBoxTotalClaimCount()
		{
			return 0;
		}

		public void AddDailyTaskBoxTotalClaimCount()
		{
		}

		public static string GetSimpleNumber(int number)
		{
			return null;
		}

		public string GetUsingSkin()
		{
			return null;
		}

		public void SetUsingSkin(string skinName, string where = "Home")
		{
		}

		public List<string> GetUserSkins()
		{
			return null;
		}

		public bool IsUserHasSkin(string skinName)
		{
			return false;
		}

		public bool IsUserActuallyHasSkin(string skinName)
		{
			return false;
		}

		public void UpdateSkinScoreProgressHeadless(int addedScore)
		{
		}

		public void AddUserSkin(string skinName)
		{
		}

		public string GetCurrentTaskSkin()
		{
			return null;
		}

		public string GetCurrentDailyRewardSkin()
		{
			return null;
		}

		public Color GetCurrentSkinLineColor(int grade)
		{
			return default;
		}

		private Color GetWatermelonSkinLineColor(int grade)
		{
			return default;
		}

		private Color GetBrainrotLineColor(int grade)
		{
			return default;
		}

		private Color GetCapybaraLineColor(int grade)
		{
			return default;
		}

		private Color GetFruityPalsLineColor(int grade)
		{
			return default;
		}

		private Color GetPlanetLineColor(int grade)
		{
			return default;
		}

		private Color GetEverydayTreatsLineColor(int grade)
		{
			return default;
		}

		private Color GetChipsLineColor(int grade)
		{
			return default;
		}

		public Color GetCurrentSkinMergeColor(int grade)
		{
			return default;
		}

		private Color GetWatermelonSkinMergeColor(int grade)
		{
			return default;
		}

		private Color GetBrainrotMergeColor(int grade)
		{
			return default;
		}

		private Color GetCapybaraMergeColor(int grade)
		{
			return default;
		}

		private Color GetFruityPalsMergeColor(int grade)
		{
			return default;
		}

		private Color GetPlanetMergeColor(int grade)
		{
			return default;
		}

		private Color GetEverydayTreatsMergeColor(int grade)
		{
			return default;
		}

		private Color GetChipsMergeColor(int grade)
		{
			return default;
		}

		public int GetCompletedTaskCount()
		{
			return 0;
		}

		private void AddCompletedTaskCount()
		{
		}

		public TaskItemData GetCurrentTaskItem()
		{
			return null;
		}

		private void UpdateCurrentTaskItem()
		{
		}

		public void TryUpdateCurrentTask(int targetGrade, bool delayCompleteTask)
		{
		}

		public void TryCompleteCurrentTask()
		{
		}

		public void ClearCurrentTaskRecord()
		{
		}

		public int GetSkinUnlockedGrade()
		{
			return 0;
		}

		public void SetSkinUnlockedGrade(int grade)
		{
		}

		public int GetNextSkinAccumulatedScore()
		{
			return 0;
		}

		public void SetNextSkinAccumulatedScore(int accumulatedScore)
		{
		}

		public int GetNextSkinUnlockScore()
		{
			return 0;
		}

		public void SetNextSkinUnlockScore(int retainScore)
		{
		}
	}
}
