using System;
using UnityEngine;

namespace GameCore.Scripts.Launch
{
	public class SevenDayNotification : UnityEngine.Object
	{
		private struct NotifyInfo
		{
			public string title;

			public string content;
		}

		private static readonly NotifyInfo[] m_NotifyInfos;

		public static bool IsOpenNotification()
		{
			return false;
		}

		public static void JumpNotification(string bundleid)
		{
		}

		public static void RegisterForNotifications()
		{
		}

		public static void TestFor10Seconds()
		{
		}

		public static void UpdateSevenDaysNotification()
		{
		}

		private static void NotificationMessage(string title, string message, DateTime newDate, long day)
		{
		}

		public static void CleanNotification()
		{
		}
	}
}
