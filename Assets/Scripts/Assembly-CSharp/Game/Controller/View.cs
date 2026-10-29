using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Game.Controller
{
	public abstract class View : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003CDelay_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public float duration;

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
			public _003CDelay_003Ed__17(int _003C_003E1__state)
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

		[HideInInspector]
		public string PrefabPath;

		private List<string> m_ResPathList;

		private Canvas m_canvas;

		private bool isHide;

		protected Canvas RootCanvas => null;

		public virtual void Init(params object[] data)
		{
		}

		private void ResetCanvasScaler()
		{
		}

		public virtual void Show()
		{
		}

		public virtual void Hide(string topViewName)
		{
		}

		public virtual void ReShow(string lastViewName)
		{
		}

		public virtual void ReActive(string lastViewName)
		{
		}

		public virtual void Close()
		{
		}

		public bool IsHide()
		{
			return false;
		}

		public static void ShowMask()
		{
		}

		public static void HideMask()
		{
		}

		protected void AppendLoadRes(string path)
		{
		}

		[IteratorStateMachine(typeof(_003CDelay_003Ed__17))]
		protected IEnumerator Delay(float duration, Action action)
		{
			return null;
		}
	}
}
