using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;

public class LongPressButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IPointerExitHandler
{
	[CompilerGenerated]
	private sealed class _003CDelayedLongPress_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public LongPressButton _003C_003E4__this;

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
		public _003CDelayedLongPress_003Ed__16(int _003C_003E1__state)
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

	private float delayTime;

	public UnityEvent onLongPressBegin;

	private bool isPointerDown;

	private bool isLongPressed;

	private bool canLongPressBeginInvoked;

	private Coroutine delayLongPressRoutine;

	public bool CanLongPressBeginInvoked
	{
		set
		{
		}
	}

	private void Update()
	{
	}

	private void OnDestroy()
	{
	}

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}

	public void OnPointerExit(PointerEventData eventData)
	{
	}

	public void Reset()
	{
	}

	public void StopDelayedLongPress()
	{
	}

	public void StartDelayedLongPress()
	{
	}

	[IteratorStateMachine(typeof(_003CDelayedLongPress_003Ed__16))]
	private IEnumerator DelayedLongPress()
	{
		return null;
	}

	private void CancelLongPress()
	{
	}

	public bool IsPointDown()
	{
		return false;
	}
}
