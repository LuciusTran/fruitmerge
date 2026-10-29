using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class SettingDialogForHome : View
	{
		private Image m_img_sound;

		private Image m_img_music;

		private Image m_img_vibration;

		private Image m_img_avatar;

		private InputField m_input_username;

		[SerializeField]
		private Sprite[] m_Music_Sprites;

		[SerializeField]
		private Sprite[] m_Sound_Sprites;

		[SerializeField]
		private Sprite[] m_Vibration_Sprites;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		[DoNotRename]
		public void OnCloseViewClicked()
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

		[DoNotRename]
		public void OnChangeAvatarClicked()
		{
		}

		[DoNotRename]
		public void OnInputFieldSubmit()
		{
		}

		[DoNotRename]
		public void OnRestoreViewClicked()
		{
		}
	}
}
