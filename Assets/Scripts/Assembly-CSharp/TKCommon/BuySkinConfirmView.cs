using Game.Controller;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class BuySkinConfirmView : View
	{
		private RectTransform m_trans_Panel;

		private Image m_img_Skin;

		private NormalClickButton m_btn_Buy;

		private Text m_txt_Price;

		private NormalClickButton m_btn_Close;

		private string _skinName;

		private int _skinPrice;

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

		private void OnDestroy()
		{
		}

		private void OnBtnBuy()
		{
		}
	}
}
