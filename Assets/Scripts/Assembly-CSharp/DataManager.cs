using System.Collections.Generic;
using Game.Manager;
using Loxodon.Framework.Prefs;
using UnityEngine;

public class DataManager : Singleton<DataManager>, IProgress
{
	public class LeagueFakeData
	{
		public int TargetNum;

		public int Rank;

		public string PictureURL;

		public string UserID;

		public string UserName;

		public string UserType;
	}

	public class PlayerLeagueData
	{
		public int TargetNum;

		public string userId;

		public string userIcon;

		public string userName;

		public double LastTimeOffLineTime;

		public string CurrentRankWeek;
	}

	public bool isNewInstall;

	[SerializeField]
	private float m_Progress;

	private Preferences m_GlobalRef;

	public bool isNewVersionApp;

	public GameAchiveMain gameAchiveMain;

	public List<DailyTaskModel> dailyQuestConfigTasks;

	private readonly string[] _nameArray;

	private readonly string[] _suffixArray;

	public float FirstVersion => 0f;

	public float GetProgress()
	{
		return 0f;
	}

	public override void Awake()
	{
	}

	public bool IsOldPlayerWithFullSkinUnlock()
	{
		return false;
	}

	private void Start()
	{
	}

	private int GetBuildID()
	{
		return 0;
	}

	private void OnApplicationQuit()
	{
	}

	private void OnApplicationPause(bool pauseStatus)
	{
	}

	public void ClearSaveData()
	{
	}

	public int GetInstallDays()
	{
		return 0;
	}

	public double GetInstallDaysOneDecimal()
	{
		return 0.0;
	}

	public static string DecimalToPercentage(float decimalValue, int decimalPlaces = 0, bool addPercentSign = true)
	{
		return null;
	}

	public void InitDailyQuest()
	{
	}

	private void LoadDailyQuestConfig()
	{
	}

	private void LoadDailyQuestSaveData()
	{
	}

	public void SaveData()
	{
	}

	private void SaveDailyQuestSaveData()
	{
	}

	private void CheckDailyRefresh()
	{
	}

	private void RefreshDailyQuest()
	{
	}

	public void UpdateDailyTaskProgress(int taskId, int num = 1, int condition = -1)
	{
	}

	public bool HasAnyDailyQuestRewardToClaim()
	{
		return false;
	}

	public PlayerLeagueData GetPlayerLeagueData()
	{
		return null;
	}

	public void SavePlayerLeagueData(PlayerLeagueData playerLeagueData)
	{
	}

	public string GetTimeUntilSunday2400()
	{
		return null;
	}

	public List<string> GenerateUniqueNames(int count)
	{
		return null;
	}

	public static void ConfigFakerUserData()
	{
	}

	public static void UpdateOnLineFakerUserData()
	{
	}

	public static int GetRankIndex(List<LeagueFakeData> models, LeagueFakeData targetModel)
	{
		return 0;
	}

	public static void ClearAllRankData()
	{
	}

	public List<LeagueFakeData> GetLeagueFakeData()
	{
		return null;
	}

	public static void UpdateOffLineFakerUserData()
	{
	}

	public static int DoubleCeiling(double value)
	{
		return 0;
	}

	public string GetYearAndWeek()
	{
		return null;
	}

	public static bool CheckProbability(double probability)
	{
		return false;
	}

	public static double GetcurrentTimeStamp()
	{
		return 0.0;
	}

	public void SaveResourceJsonData(string text, string fileName)
	{
	}

	public string GetResourceJsonData(string fileName)
	{
		return null;
	}

	public void ClearCachedJsonData()
	{
	}

	public string GenerateRandomString()
	{
		return null;
	}

	public string GenerateRandomStringDeviceId()
	{
		return null;
	}

	public string GetYearMonthDayUTC()
	{
		return null;
	}

	public static int RoundToNearestMultipleOfFive(int number)
	{
		return 0;
	}
}
