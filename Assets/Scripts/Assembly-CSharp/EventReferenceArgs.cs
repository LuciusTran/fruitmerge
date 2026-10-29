using System.Collections.Generic;
using GameFramework;

public sealed class EventReferenceArgs : IReference
{
	public string EventName { get; private set; }

	public Dictionary<string, object> EventObjs { get; private set; }

	public Dictionary<string, string> EventStrs { get; private set; }

	public static EventReferenceArgs Create(string eventName)
	{
		return null;
	}

	public void Clear()
	{
	}
}
