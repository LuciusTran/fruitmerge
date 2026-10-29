using System.Collections.Generic;
using Loxodon.Log;

public class EventLogger : Singleton<EventLogger>
{
	private static readonly ILog Log;

	private List<IEventLogger> EventLoggers;

	private Dictionary<string, string> utMap;

	public string UTString()
	{
		return null;
	}

	public void AddEventLogger<T>() where T : IEventLogger, new()
	{
	}

	public void LogFirstEvent(string eventName, Dictionary<string, string> parameters = null)
	{
	}

	public void LogFirstEvent(string eventName, string key1, string value1)
	{
	}

	public void LogFirstEvent(string eventName, string key1, string value1, string key2, string value2)
	{
	}

	public void LogEvent(string eventName, string logOnlyOnceKey = null)
	{
	}

	public void LogEvent(string eventName, string key, string value, string logOnlyOnceKey = null)
	{
	}

	public void LogEvent(string eventName, string key1, string value1, string key2, string value2, string logOnlyOnceKey = null)
	{
	}

	public void LogEvent(string eventName, string key1, string value1, string key2, string value2, string key3, string value3, string logOnlyOnceKey = null)
	{
	}

	public void TkLogEvent(string eventName, Dictionary<string, object> dict, string logOnlyOnceKey = null)
	{
	}

	public void FBLogEvent(string eventName, Dictionary<string, string> dict)
	{
	}

	public void OtherLogEvent(string eventName, Dictionary<string, string> dict, string logOnlyOnceKey = null)
	{
	}

	public void LogEvent(string eventName, Dictionary<string, string> dict, string logOnlyOnceKey = null)
	{
	}

	public void calEvent(string eventName, string key, string value, int number, string logOnlyOnceKey = null)
	{
	}

	public void calEvent(string eventName, Dictionary<string, string> dict, int number, string logOnlyOnceKey = null)
	{
	}

	private void _logEvent(string eventName, string key, string value, bool isAB)
	{
	}

	private void _logEvent(string eventName, Dictionary<string, string> dict, bool isAB)
	{
	}

	private void _calEvent(string eventName, string key, string value, int number)
	{
	}

	private void _calEvent(string eventName, Dictionary<string, string> dict, int number)
	{
	}
}
