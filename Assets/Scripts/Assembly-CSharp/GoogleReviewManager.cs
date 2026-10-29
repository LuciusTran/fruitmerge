using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Google.Play.Common;
using Google.Play.Review;

public class GoogleReviewManager : Singleton<GoogleReviewManager>
{
	[CompilerGenerated]
	private sealed class _003CStartAskRatingsCo_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GoogleReviewManager _003C_003E4__this;

		private PlayAsyncOperation<PlayReviewInfo, ReviewErrorCode> _003CrequestFlowOperation_003E5__2;

		private PlayAsyncOperation<VoidResult, ReviewErrorCode> _003ClaunchFlowOperation_003E5__3;

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
		public _003CStartAskRatingsCo_003Ed__4(int _003C_003E1__state)
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

	private ReviewManager _reviewManager;

	private ReviewManager reviewManager => null;

	public void AskRatings()
	{
	}

	[IteratorStateMachine(typeof(_003CStartAskRatingsCo_003Ed__4))]
	private IEnumerator StartAskRatingsCo()
	{
		return null;
	}
}
