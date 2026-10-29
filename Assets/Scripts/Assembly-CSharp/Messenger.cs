using System;
using System.Collections.Generic;

internal static class Messenger
{
	public class BroadcastException : Exception
	{
		public BroadcastException(string msg)
		{
		}
	}

	public class ListenerException : Exception
	{
		public ListenerException(string msg)
		{
		}
	}

	private static MessengerHelper messengerHelper;

	public static Dictionary<string, Delegate> eventTable;

	public static List<string> permanentMessages;

	public static void MarkAsPermanent(string eventType)
	{
	}

	public static void Cleanup()
	{
	}

	public static void PrintEventTable()
	{
	}

	public static void OnListenerAdding(string eventType, Delegate listenerBeingAdded)
	{
	}

	public static void OnListenerRemoving(string eventType, Delegate listenerBeingRemoved)
	{
	}

	public static void OnListenerRemoved(string eventType)
	{
	}

	public static void OnBroadcasting(string eventType)
	{
	}

	public static BroadcastException CreateBroadcastSignatureException(string eventType)
	{
		return null;
	}

	public static void AddListener(string eventType, Callback handler)
	{
	}

	public static void AddListener<T>(string eventType, Callback<T> handler)
	{
	}

	public static void AddListener<T, U>(string eventType, Callback<T, U> handler)
	{
	}

	public static void AddListener<T, U, V>(string eventType, Callback<T, U, V> handler)
	{
	}

	public static void RemoveListener(string eventType, Callback handler)
	{
	}

	public static void RemoveListener<T>(string eventType, Callback<T> handler)
	{
	}

	public static void RemoveListener<T, U>(string eventType, Callback<T, U> handler)
	{
	}

	public static void RemoveListener<T, U, V>(string eventType, Callback<T, U, V> handler)
	{
	}

	public static void Broadcast(string eventType)
	{
	}

	public static void Broadcast<T>(string eventType, T arg1)
	{
	}

	public static void Broadcast<T, U>(string eventType, T arg1, U arg2)
	{
	}

	public static void Broadcast<T, U, V>(string eventType, T arg1, U arg2, V arg3)
	{
	}
}
