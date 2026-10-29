using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class ReviveDialog : View
	{
		[CompilerGenerated]
		private sealed class _003CCountdownCoroutine_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public ReviveDialog _003C_003E4__this;

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
			public _003CCountdownCoroutine_003Ed__16(int _003C_003E1__state)
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

		private NormalClickButton m_btn_Revive;

		private Image m_img_progress;

		private Text m_txt_num;

		private const float COUNTDOWN_TIME = 5f;

		private float m_CurrentTime;

		private Action _reviveAction;

		private Action _finishAction;

		private bool _isClosed;

		private Coroutine _countdownCoroutine;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		public override void Show()
		{
		}

		public override void Close()
		{
		}

		private void OnDestroy()
		{
		}

		private void StartCountdown()
		{
		}

		private void StopCountdown()
		{
		}

		[IteratorStateMachine(typeof(_003CCountdownCoroutine_003Ed__16))]
		private IEnumerator CountdownCoroutine()
		{
			return null;
		}

		[DoNotRename]
		public void OnReviveBtnClicked()
		{
		}
	}
}
