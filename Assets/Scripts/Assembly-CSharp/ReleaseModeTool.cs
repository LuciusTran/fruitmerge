using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Loxodon.Log;
using UnityEngine;
using UnityEngine.Networking;

public class ReleaseModeTool : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CStartCheckRequest_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Action completeHandler;

		private UnityWebRequest _003Crequest_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CStartCheckRequest_003Ed__9(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private static readonly ILog log;

	public static bool hasSyncOnce;

	private static bool specificIP;

	public static string IpState;

	private static string IP;

	private static string ISP;

	public static bool IsReleaseMode()
	{
		return false;
	}

	public static bool NeedUpdateAdId()
	{
		return false;
	}

	public void CheckXYZStatus(Action completeHandler)
	{
	}

	[IteratorStateMachine(typeof(_003CStartCheckRequest_003Ed__9))]
	private IEnumerator StartCheckRequest(Action completeHandler)
	{
		return null;
	}

	public static void MatchEventLog()
	{
	}
}
