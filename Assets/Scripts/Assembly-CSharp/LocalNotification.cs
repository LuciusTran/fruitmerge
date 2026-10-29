using System;
using UnityEngine;

public class LocalNotification
{
	public enum Importance
	{
		Default = 3,
		High = 4,
		Low = 2,
		Max = 5,
		Min = 1,
		None = 0
	}

	public class Action
	{
		public string Identifier;

		public string Title;

		public string Icon;

		public bool Foreground;

		public string GameObject;

		public string HandlerMethod;

		public Action(string identifier, string title, MonoBehaviour handler)
		{
		}
	}

	private static string fullClassName;

	private static string actionClassName;

	private static string bundleIdentifier => null;

	public static int SendNotification(TimeSpan delay, string title, string message, Color32 bgColor, bool sound = true, bool vibrate = true, bool lights = true, string bigIcon = "", string soundName = null, string channel = "default", params Action[] actions)
	{
		return 0;
	}

	public static int SendNotification(int id, TimeSpan delay, string title, string message, Color32 bgColor, bool sound = true, bool vibrate = true, bool lights = true, string bigIcon = "", string soundName = null, string channel = "default", params Action[] actions)
	{
		return 0;
	}

	public static int SendNotificationByMs(int id, long delayMs, string title, string message, Color32 bgColor, bool sound = true, bool vibrate = true, bool lights = true, string bigIcon = "", string soundName = null, string channel = "default", params Action[] actions)
	{
		return 0;
	}

	public static int SendNotification(int id, long delayMs, string title, string message, Color32 bgColor, bool sound = true, bool vibrate = true, bool lights = true, string bigIcon = "", string soundName = null, string channel = "default", params Action[] actions)
	{
		return 0;
	}

	public static int SendRepeatingNotification(TimeSpan delay, TimeSpan timeout, string title, string message, Color32 bgColor, bool sound = true, bool vibrate = true, bool lights = true, string bigIcon = "", string soundName = null, string channel = "default", params Action[] actions)
	{
		return 0;
	}

	public static int SendRepeatingNotification(int id, TimeSpan delay, TimeSpan timeout, string title, string message, Color32 bgColor, bool sound = true, bool vibrate = true, bool lights = true, string bigIcon = "", string soundName = null, string channel = "default", params Action[] actions)
	{
		return 0;
	}

	public static int SendRepeatingNotification(int id, long delayMs, long timeoutMs, string title, string message, Color32 bgColor, bool sound = true, bool vibrate = true, bool lights = true, string bigIcon = "", string soundName = null, string channel = "default", params Action[] actions)
	{
		return 0;
	}

	public static void CancelNotification(int id)
	{
	}

	public static void ClearNotifications()
	{
	}

	public static void CreateChannel(string identifier, string name, string description, Color32 lightColor, bool enableLights = true, string soundName = null, Importance importance = Importance.Default, bool vibrate = true, long[] vibrationPattern = null)
	{
	}

	private static int ToInt(Color32 color)
	{
		return 0;
	}

	private static AndroidJavaObject PopulateActions(Action[] actions)
	{
		return null;
	}
}
