using System;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class SubscriptionView : View
	{
		public enum SubType
		{
			Weekly = 0,
			Annual = 1
		}

		private Text m_txt_addProfit;

		private Text m_txt_profit;

		private Image m_img_WeeklyBtn;

		private Text m_txt_Weekly;

		private Text m_txt_WeeklyPrice;

		private Text m_txt_freeTrail;

		private Image m_img_AnnualBtn;

		private Text m_txt_annual;

		private Text m_txt_AnnualPrice;

		private RectTransform m_trans_ContinueBtn;

		private RectTransform m_trans_TermsBtn;

		private RectTransform m_trans_PrivacyBtn;

		private RectTransform m_trans_RestoreBtn;

		private RectTransform m_trans_CloseBtn;

		private Action _closeAction;

		private SubType _currentSubType;

		private string _weeklySubId;

		private string _annualSubId;

		public string eventlogfromwhere;

		private Callback successCallback;

		private Callback onCloseCallback;

		[SerializeField]
		private Sprite[] bgSprites;

		[SerializeField]
		private Color[] colors;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void FetchAndSetPrices()
		{
		}

		private void SelectSubType(SubType subType)
		{
		}

		[DoNotRename]
		public void OnWeeklyBtnClicked()
		{
		}

		[DoNotRename]
		public void OnAnnualBtnClicked()
		{
		}

		[DoNotRename]
		public void OnContinueBtnClicked()
		{
		}

		private void Purchase(string productId)
		{
		}

		[DoNotRename]
		public void OnCloseViewClicked()
		{
		}

		[DoNotRename]
		public void OnTermsBtnClicked()
		{
		}

		[DoNotRename]
		public void OnPrivacyBtnClicked()
		{
		}

		[DoNotRename]
		public void OnRestoreBtnClicked()
		{
		}
	}
}
