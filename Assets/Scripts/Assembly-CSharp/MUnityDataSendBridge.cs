using OPS.Obfuscator.Attribute;
using UnityEngine;

[DoNotObfuscateClass]
public class MUnityDataSendBridge
{
	private static MUnityDataSendBridge _instance;

	private readonly AndroidJavaObject _mUnityDataSend;

	public bool isDebug;

	private MUnityDataSendBridge()
	{
	}

	public static MUnityDataSendBridge getInstance()
	{
		return null;
	}

	public void initialize(string appID, string appKey)
	{
	}

	public void trackAdRevenue(string trackAdJsonStr, string extraJsonStr)
	{
	}

	public void trackAdRevenue(string trackAdJsonStr)
	{
	}

	public void trackAdCustom(string trackAdJsonStr)
	{
	}

	private AndroidJavaObject getApplicationContext()
	{
		return null;
	}

	public void setDebug(bool debug)
	{
	}
}
