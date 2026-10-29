using Game.Controller;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class SkinProgressView : View
	{
		private Image m_img_GraySkin;

		private Image m_img_ColorSkin;

		private RectTransform m_trans_Bubble;

		private Text m_txt_RetainScore;

		private NormalClickButton m_btn_Close;

		private Text m_txt_Score;

		private ParticleSystem m_pl_UpVFX;

		private ParticleSystem m_pl_DownVFX;

		private int _unlockScore;

		private int _lastScore;

		private bool _isClosing;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void OnDestroy()
		{
		}

		public override void Close()
		{
		}

		private void StopSkinProgressSound()
		{
		}
	}
}
