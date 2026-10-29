using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class TicketView : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003COnTicketAnimationFinished_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameObject mask;

		public Action onFinish;

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
		public _003COnTicketAnimationFinished_003Ed__9(int _003C_003E1__state)
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

	[SerializeField]
	private Text m_txt_Ticket;

	[SerializeField]
	private Transform m_TicketRoot;

	[SerializeField]
	private GameObject m_TicketPrefab;

	private int m_TempTicket;

	private void OnEnable()
	{
	}

	private void OnDestroy()
	{
	}

	private void RefreshCoins()
	{
	}

	public void PlayTicketAnimation(Vector3 position, int count, Action onFinish = null, int particleCount = 10, Action onStartFly = null)
	{
	}

	private void OnUpdateTicket()
	{
	}

	[IteratorStateMachine(typeof(_003COnTicketAnimationFinished_003Ed__9))]
	private IEnumerator OnTicketAnimationFinished(GameObject mask, Action onFinish)
	{
		return null;
	}
}
