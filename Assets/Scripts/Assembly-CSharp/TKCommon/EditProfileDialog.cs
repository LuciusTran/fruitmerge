using System;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class EditProfileDialog : View
	{
		private Text m_txt_Title;

		private RectTransform m_trans_border1;

		private RectTransform m_trans_border1_selected;

		private RectTransform m_trans_border2;

		private RectTransform m_trans_border2_selected;

		private RectTransform m_trans_border3;

		private RectTransform m_trans_border3_selected;

		private RectTransform m_trans_border4;

		private RectTransform m_trans_border4_selected;

		private RectTransform m_trans_border5;

		private RectTransform m_trans_border5_selected;

		private RectTransform m_trans_border6;

		private RectTransform m_trans_border6_selected;

		private RectTransform m_trans_border7;

		private RectTransform m_trans_border7_selected;

		private RectTransform m_trans_border8;

		private RectTransform m_trans_border8_selected;

		private bool changed;

		private int picId;

		private Action closeAction;

		private bool _isClosed;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		public override void Close()
		{
		}

		private void RefreshSelected()
		{
		}

		[DoNotRename]
		public void OnAvatarSelected(int index)
		{
		}

		[DoNotRename]
		public void OnAvatarSaveClicked(Button btn)
		{
		}

		[DoNotRename]
		public void OnCloseViewClicked()
		{
		}
	}
}
