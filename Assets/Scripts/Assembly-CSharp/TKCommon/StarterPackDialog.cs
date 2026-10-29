using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class StarterPackDialog : View
	{
		private Text m_txt_Coin;

		private RectTransform m_trans_Clean;

		private Text m_txt_Clean;

		private RectTransform m_trans_Bomb;

		private Text m_txt_Bomb;

		private RectTransform m_trans_Upgrade;

		private Text m_txt_Upgrade;

		private RectTransform m_trans_Shake;

		private Text m_txt_Shake;

		private Text m_txt_Purchase;

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
		public void OnPurchaseBtnClicked()
		{
		}

		private void PurchaseSuccess()
		{
		}
	}
}
