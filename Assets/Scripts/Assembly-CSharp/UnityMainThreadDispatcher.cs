using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class UnityMainThreadDispatcher : Singleton<UnityMainThreadDispatcher>
{
	[CompilerGenerated]
	private sealed class _003CActionWrapper_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Action a;

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
		public _003CActionWrapper_003Ed__13(int _003C_003E1__state)
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

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CActionWrapperDelay_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float time;

		public Action a;

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
		public _003CActionWrapperDelay_003Ed__12(int _003C_003E1__state)
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

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private static readonly Queue<Action> _executionQueue;

	private static readonly Queue<Action> _delayExecutionQueue;

	public bool DelayLaunch;

	private static int _mainThreadId;

	public static bool IsMainThread => false;

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void InitializeMainThread()
	{
	}

	public void Update()
	{
	}

	public void Enqueue(IEnumerator action, bool isDelay = false)
	{
	}

	public void EnqueueInMainThread(Action action, bool isDelay = false)
	{
	}

	public void Enqueue(Action action, bool isDelay = false)
	{
	}

	public void Enqueue(Action action, float time, bool isDelay = false)
	{
	}

	[IteratorStateMachine(typeof(_003CActionWrapperDelay_003Ed__12))]
	private IEnumerator ActionWrapperDelay(Action a, float time)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CActionWrapper_003Ed__13))]
	private IEnumerator ActionWrapper(Action a)
	{
		return null;
	}
}
