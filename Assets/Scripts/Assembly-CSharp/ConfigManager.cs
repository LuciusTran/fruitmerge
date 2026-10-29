using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Game.Manager;
using UnityEngine.Networking;

public class ConfigManager : Singleton<ConfigManager>, IProgress
{
	[CompilerGenerated]
	private sealed class _003CDownload_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public string fileName;

		public ConfigManager _003C_003E4__this;

		public Action<string> onGetData;

		public Action onDownloadFail;

		public Action onDownloadSuccess;

		private UnityWebRequest _003Crequest_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CDownload_003Ed__26(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private int m_TimeOut;

	private string m_Cdn_path;

	private string m_TestCdn_path;

	public const string SHOP_CONFIG = "Shop";

	public const string DAILY_REWARD_CONFIG = "DailyReward";

	public const string JSON_VERSION = "v7";

	private float _shopResourceProgress;

	private float _skinDataProgress;

	private float _leagueDataProgress;

	private float _taskDataProgress;

	private float _roomProgress;

	private float _dailyQuestProgress;

	private string DownloadURL => null;

	public string RemoteDownloadURL => null;

	public float GetProgress()
	{
		return 0f;
	}

	private void Start()
	{
	}

	private void OnDestroy()
	{
	}

	private void StartLoadResourceStart(bool tkLoadSuccess)
	{
	}

	private void LoadAllResources()
	{
	}

	private void LoadShopResource()
	{
	}

	private void LoadRoom()
	{
	}

	private void LoadDailyQuest()
	{
	}

	private void ParseSkinData(string jsonStr)
	{
	}

	private void LoadSkinData()
	{
	}

	private void LoadLeagueData()
	{
	}

	private void LoadTaskData()
	{
	}

	private void DownloadConfig(string fileName, Action<string> onGetData, Action onDownloadSuccess, Action onDownloadFail, bool forceLocalFile = false)
	{
	}

	private string GetLocalData(string fileName)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDownload_003Ed__26))]
	private IEnumerator Download(string fileName, Action<string> onGetData, Action onDownloadSuccess, Action onDownloadFail)
	{
		return null;
	}

	public ShopModel GetShopModel()
	{
		return null;
	}

	public List<RoomModel> GetRoomList()
	{
		return null;
	}

	public List<SkinItemData> GetSkinList()
	{
		return null;
	}

	public List<TaskItemData> GetTaskList()
	{
		return null;
	}

	public List<DailyRewardModel> GetDailyRewardList()
	{
		return null;
	}

	public List<LeagueItemData> GetLeagueList()
	{
		return null;
	}
}
