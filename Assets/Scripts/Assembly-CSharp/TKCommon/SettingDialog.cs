using System;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class SettingDialog : View
	{
		private Image m_img_sound;

		private Image m_img_music;

		private Image m_img_vibration;

		[SerializeField]
		private Sprite[] m_Music_Sprites;

		[SerializeField]
		private Sprite[] m_Sound_Sprites;

		[SerializeField]
		private Sprite[] m_Vibration_Sprites;

		private Action _homeAction;

		private Action _restartAction;

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

		[DoNotRename]
		public void OnCloseViewClicked()
		{
		}

		[DoNotRename]
		public void OnHomeBtnClicked()
		{
		}

		[DoNotRename]
		public void OnSkinBtnClicked()
		{
		}

		[DoNotRename]
		public void OnSoundBtnClicked()
		{
		}

		[DoNotRename]
		public void OnMusicBtnClicked()
		{
		}

		[DoNotRename]
		public void OnVibrationBtnClicked()
		{
		}
	}
}
