using System.Collections.Generic;

public interface IEventLogger
{
	void LogEvent(string eventName, string key, string value);

	void LogEvent(string eventName, Dictionary<string, string> dict);

	void calEvent(string eventName, string key, string value, int number);

	void calEvent(string eventName, Dictionary<string, string> dict, int number);
}
