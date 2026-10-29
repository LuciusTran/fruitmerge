using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class CameraCapture : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CCaptureFruitScreenshot_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CameraCapture _003C_003E4__this;

		public Rect rect;

		public Action<Texture2D> callback;

		private CameraClearFlags _003CoriginalClearFlags_003E5__2;

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
		public _003CCaptureFruitScreenshot_003Ed__6(int _003C_003E1__state)
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

	private Camera _fruitCamera;

	private RenderTexture _fruitTexture;

	private Texture2D _screenshotTexture;

	private bool _isCapturing;

	private void Awake()
	{
	}

	public void TakeScreenshot(Rect rect, Action<Texture2D> callback)
	{
	}

	[IteratorStateMachine(typeof(_003CCaptureFruitScreenshot_003Ed__6))]
	private IEnumerator CaptureFruitScreenshot(Rect rect, Action<Texture2D> callback)
	{
		return null;
	}

	private Rect ClampReadPixelsRect(Rect rect)
	{
		return default;
	}

	private bool DoesPlatformRequireFlip()
	{
		return false;
	}
}
