using System;
using System.Runtime.CompilerServices;
using OPS.Obfuscator.Attribute;

[DoNotObfuscateClass]
public class AppTrackingHelper : Singleton<AppTrackingHelper>
{
	[CompilerGenerated]
	private static Action m_RequestStatusCallback;

	public static event Action RequestStatusCallback
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static AppTrackingStatus TrackingStatus()
	{
		return AppTrackingStatus.not_determined;
	}

	public static bool Valid()
	{
		return false;
	}

	public static bool NeedExlicitRequest()
	{
		return false;
	}

	public static bool CanGetIDFA()
	{
		return false;
	}

	public static void OpenAppSettings()
	{
	}

	public void RequestAppTracking(Action requestHandler)
	{
	}

	public void AppTrackingRequestCallback(string p)
	{
	}
}
