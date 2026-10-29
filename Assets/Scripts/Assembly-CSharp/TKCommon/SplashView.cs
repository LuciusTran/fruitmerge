using System.Collections.Generic;
using Game.Controller;
using Game.Manager;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class SplashView : View
	{
		[SerializeField]
		private Text m_LoadingText;

		[SerializeField]
		public ShaderVariantCollection shaderVariants;

		private Dictionary<string, IProgress> progressDic;

		private float m_Progress;

		private bool m_IsFinish;

		private string[] loadingStrings;

		private int loadingIndex;

		private float loadingChangeTime;

		private float loadingTime;

		public override void Init(params object[] data)
		{
		}

		private void Update()
		{
		}

		private void OnLoadingFinished()
		{
		}

		private void ShowLaunchTargetView()
		{
		}

		private void ResetTickets()
		{
		}

		private void StartFirstLaunchEvent()
		{
		}
	}
}
