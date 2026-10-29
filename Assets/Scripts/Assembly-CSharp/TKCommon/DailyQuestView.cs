using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Game.Controller;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class DailyQuestView : View
	{
		[CompilerGenerated]
		private sealed class _003CRecoverAlpha_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public DailyQuestView _003C_003E4__this;

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
			public _003CRecoverAlpha_003Ed__13(int _003C_003E1__state)
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
		private DailyTaskItem[] taskItems;

		[SerializeField]
		private Text[] needNumText;

		[SerializeField]
		private Image[] boximage;

		[SerializeField]
		private Sprite[] boximageSprite;

		private List<DailyTaskModel> listData;

		private Image _progress;

		private NormalClickButton _btnClose;

		private CanvasGroup m_FlickerPreventGroup;

		private void Awake()
		{
		}

		public override void Init(params object[] data)
		{
		}

		public void ConfigTopUi(bool needAnimation = false)
		{
		}

		public void OnClaimBoxClick(int index)
		{
		}

		public override void Show()
		{
		}

		[IteratorStateMachine(typeof(_003CRecoverAlpha_003Ed__13))]
		private IEnumerator RecoverAlpha()
		{
			return null;
		}

		public override void Close()
		{
		}

		private void OnDestroy()
		{
		}

		public void SortTaskListByRewardNumAsc(List<DailyTaskModel> taskList)
		{
		}

		private void InitTestData()
		{
		}

		private void InitDailyQuestItem()
		{
		}

		private void PlayMedalAnimation(DailyTaskItem taskItem, Action onFinish)
		{
		}
	}
}
