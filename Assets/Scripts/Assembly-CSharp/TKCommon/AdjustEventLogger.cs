using System.Collections.Generic;

namespace TKCommon
{
	public class AdjustEventLogger : IEventLogger
	{
		public static readonly Dictionary<string, string> eventDictionary;

		public bool NeedTrackAB()
		{
			return false;
		}

		public void LogEvent(string eventName, string key, string value)
		{
		}

		public void LogEvent(string eventName, Dictionary<string, string> dict)
		{
		}

		public void calEvent(string eventName, string key, string value, int number)
		{
		}

		public void calEvent(string eventName, Dictionary<string, string> dict, int number)
		{
		}

		public void LogAdRevenue(string source, double revenue, string currency, string adUnityId, string placementId, string network)
		{
		}

		public string GetPurchaseProductSuccessAdjustKey()
		{
			return null;
		}
	}
}
