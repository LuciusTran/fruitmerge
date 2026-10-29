using System;
using System.Runtime.CompilerServices;
using AdjustSdk;

namespace TKCommon
{
	public class AdjustSDK : Singleton<AdjustSDK>
	{
		private AdjustAttribution adjustAttribution;

		[CompilerGenerated]
		private Action<bool> m_AttributionChanged;

		public bool IsAdUser => false;

		public AdjustAttribution Attribution => null;

		public event Action<bool> AttributionChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void Init(string token, bool isDebug, string abGroup, string fbAppId)
		{
		}

		private void AttributionChangedCallback(AdjustAttribution obj)
		{
		}

		private void DeferredDeeplinkCallback(string obj)
		{
		}

		private void SessionFailureCallback(AdjustSessionFailure obj)
		{
		}

		private void SessionSuccessCallback(AdjustSessionSuccess obj)
		{
		}

		private void EventFailureCallback(AdjustEventFailure obj)
		{
		}

		private void EventSuccessCallback(AdjustEventSuccess obj)
		{
		}
	}
}
