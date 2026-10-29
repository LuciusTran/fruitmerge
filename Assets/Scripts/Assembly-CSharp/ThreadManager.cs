using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

public class ThreadManager : Singleton<ThreadManager>
{
	[CompilerGenerated]
	private sealed class _003CActionWrapper_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Action action;

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
		public _003CActionWrapper_003Ed__9(int _003C_003E1__state)
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
	private sealed class _003CDealyCallWarp_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delayTime;

		public Action action;

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
		public _003CDealyCallWarp_003Ed__15(int _003C_003E1__state)
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

	private readonly object mainThreadDispatcherQueueLocker;

	private readonly Queue<Action> mainThreadDispatcherQueue;

	private ITask childThreadTask;

	private readonly int mainThreadId;

	private List<IUpdate> listUpdate;

	public bool IsMainThread => false;

	public void MainThread(IEnumerator action)
	{
	}

	public void MainThread(Action action)
	{
	}

	[IteratorStateMachine(typeof(_003CActionWrapper_003Ed__9))]
	private IEnumerator ActionWrapper(Action action)
	{
		return null;
	}

	public void ChildThread(Action action)
	{
	}

	public void AddUpdate(IUpdate updateObj)
	{
	}

	public void RemoveUpdate(IUpdate updateObj)
	{
	}

	private void LateUpdate()
	{
	}

	public void DealyCall(float delayTime, Action action)
	{
	}

	[IteratorStateMachine(typeof(_003CDealyCallWarp_003Ed__15))]
	private IEnumerator DealyCallWarp(float delayTime, Action action)
	{
		return null;
	}
}
