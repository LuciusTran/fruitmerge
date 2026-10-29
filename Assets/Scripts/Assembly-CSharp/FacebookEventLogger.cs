using System.Collections.Generic;

public class FacebookEventLogger : IEventLogger
{
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

	private bool IsFloat(string str)
	{
		return false;
	}

	private EventReferenceArgs GetBaseParams(string eventName)
	{
		return null;
	}
}
