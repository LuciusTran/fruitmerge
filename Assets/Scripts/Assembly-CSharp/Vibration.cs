using UnityEngine;

public static class Vibration
{
	public class iosVirbrateLoop : IUpdate
	{
		public void OnUpdate()
		{
		}
	}

	public class iosSoftVirbrateLoop : IUpdate
	{
		public void OnUpdate()
		{
		}
	}

	public static AndroidJavaClass unityPlayer;

	public static AndroidJavaObject currentActivity;

	public static AndroidJavaObject vibrator;

	public static AndroidJavaObject context;

	public static int VibrateType;

	public static float VibrateInterval;

	private static float lastVibrateTime;

	private static iosVirbrateLoop vloop;

	private static iosSoftVirbrateLoop vSoftloop;

	public static void VibratePop()
	{
	}

	public static void VibratePeek()
	{
	}

	public static void VibratePeekLoop()
	{
	}

	public static void VibrateNope()
	{
	}

	public static void VibrateRigid()
	{
	}

	public static void Vibrate(long milliseconds, int amplitude = 255)
	{
	}

	public static void Vibrate(long[] pattern, int repeat)
	{
	}

	private static int AndroidSDKInit()
	{
		return 0;
	}

	public static void Cancel()
	{
	}

	public static bool HasVibrator()
	{
		return false;
	}

	public static void Vibrate()
	{
	}

	public static void VibrateSoftRepeat()
	{
	}

	public static void VibrateMoreSoftRepeat()
	{
	}

	public static void CancelAllVibrate()
	{
	}

	public static void VirbrateMode(int mode)
	{
	}
}
