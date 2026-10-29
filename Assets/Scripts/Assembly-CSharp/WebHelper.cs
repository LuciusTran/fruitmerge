using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

public class WebHelper : Singleton<WebHelper>
{
	[CompilerGenerated]
	private sealed class _003CDoSyncServerTime_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		private UnityWebRequest _003Crequest_003E5__2;

		private UnityWebRequest _003Crequest2_003E5__3;

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
		public _003CDoSyncServerTime_003Ed__11(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CGetV2_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Action<string> onError;

		public WebHelper _003C_003E4__this;

		public string url;

		public Action<int, string> onGetData;

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
		public _003CGetV2_003Ed__24(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CPost_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Action<string> onError;

		public string url;

		public Dictionary<string, object> param;

		public WebHelper _003C_003E4__this;

		public Action<int, string> onGetData;

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
		public _003CPost_003Ed__26(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CPostV2_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Action<string> onError;

		public WebHelper _003C_003E4__this;

		public string url;

		public Dictionary<string, object> param;

		public Action<int, string> onGetData;

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
		public _003CPostV2_003Ed__25(int _003C_003E1__state)
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

	public const string m_Url = "https://user.thinkingltv.com";

	private string Platform;

	public static long ServerTimestamp;

	private static float ServerTimeSyncLocal;

	private string Content_Type;

	private const string LOCAL_RANK_LIST = "get_rank_top_list_data";

	private const string GLOBAL_RANK_LIST = "get_global_rank_top_list_data";

	private const string LEADERBOARD_ID = "leaderboard_id";

	private const string LAST_UPDATE_SCORE = "LastUpdateScore";

	private const string RANK_EVENT_ID = "RankEventId";

	private const string RANK_PERIOD = "RankPeriod";

	public static bool HasSyncedServerTime => false;

	private string Bundle_Id => null;

	private string Client_Version => null;

	private string Device_Id => null;

	private string Timestamp => null;

	private string App_Name => null;

	public string tk_UserID => null;

	public string countryCode => null;

	public static long GetSyncedServerTime()
	{
		return 0L;
	}

	public static void SaveLastExitTime()
	{
	}

	public static long GetLastExitTime()
	{
		return 0L;
	}

	private static void TrySyncServerTime(UnityWebRequest request)
	{
	}

	public void SyncServerTimeNow()
	{
	}

	[IteratorStateMachine(typeof(_003CDoSyncServerTime_003Ed__11))]
	private IEnumerator DoSyncServerTime()
	{
		return null;
	}

	public void Test()
	{
	}

	[IteratorStateMachine(typeof(_003CGetV2_003Ed__24))]
	private IEnumerator GetV2(string url, Action<int, string> onGetData, Action<string> onError)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CPostV2_003Ed__25))]
	private IEnumerator PostV2(string url, Dictionary<string, object> param, Action<int, string> onGetData, Action<string> onError)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CPost_003Ed__26))]
	private IEnumerator Post(string url, Dictionary<string, object> param, Action<int, string> onGetData, Action<string> onError)
	{
		return null;
	}

	private ulong DateTimeToLongTimeStamp()
	{
		return 0uL;
	}

	private string Base64(string data)
	{
		return null;
	}

	private string GetEncryptBodyV2(Dictionary<string, object> body)
	{
		return null;
	}

	private string GetEncryptBody(Dictionary<string, object> body)
	{
		return null;
	}

	public void update_userAvatar(int picId, Action<bool> onComplete)
	{
	}

	public void update_username(string name, Action<bool> onComplete)
	{
	}

	public void update_user_id()
	{
	}

	public void update_rank_score(Action<bool> onComplete)
	{
	}

	public RankListModel LastGlobalRankListModel()
	{
		return null;
	}

	public RankListModel LastRankListModel()
	{
		return null;
	}

	public void get_rank_top_list(Action<RankListModel> finishCallback, Action<string> onError)
	{
	}

	private void get_rank_eventInfo(Action<string, int> finishCallback, Action<string> onError)
	{
	}
}
