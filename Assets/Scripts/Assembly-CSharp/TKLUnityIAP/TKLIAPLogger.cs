using System;
using System.Diagnostics;

namespace TKLUnityIAP
{
	public class TKLIAPLogger
	{
		private static string LogPrefix;

		[Conditional("iap_log")]
		public static void Log(string msg)
		{
		}

		[Conditional("iap_log")]
		public static void Log(string prefix, string msg)
		{
		}

		[Conditional("iap_log")]
		public static void LogAssertion(string msg)
		{
		}

		[Conditional("iap_log")]
		public static void Log(DateTime time)
		{
		}

		public static void LogError(string msg)
		{
		}
	}
}
