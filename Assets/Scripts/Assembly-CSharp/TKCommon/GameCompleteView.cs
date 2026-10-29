using System;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class GameCompleteView : View
	{
		private RectTransform m_trans_Content;

		private Image m_img_Bg;

		private Image m_img_Bg_IOS;

		private Image m_img_Fruit;

		private RectTransform m_trans_NewScore;

		private Text m_txt_NewScore;

		private RectTransform m_trans_Score;

		private Text m_txt_Score;

		private Text m_txt_HightScore;

		private RectTransform m_trans_Bottom;

		private NormalClickButton m_btn_double;

		private Image m_img_ticket2;

		private Image m_img_ticket1;

		private Text m_txt_Money;

		[SerializeField]
		private Sprite mCoinSprite;

		[SerializeField]
		private Sprite mTicketSprite;

		private Texture2D _screenshotTexture;

		private int _score;

		private Action<int> nextAction;

		private Action<int> doubleCollectAction;

		private int ticket;

		private bool _isClosed;

		private bool ShowingBanner;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void OnDestroy()
		{
		}

		public override void Show()
		{
		}

		public override void Close()
		{
		}

		private void BindListeners()
		{
		}

		private void UnbindListeners()
		{
		}

		private void AdjustForBanner(bool show)
		{
		}

		private void SetUpViews()
		{
		}

		private void AddTickets()
		{
		}

		private void UpdateRankScore(Action nextAction = null)
		{
		}

		[DoNotRename]
		public void OnContinueBtnClicked()
		{
		}

		[DoNotRename]
		public void OnDoubleCollectBtnClicked()
		{
		}

		[DoNotRename]
		public void OnRankBtnClicked(Button button)
		{
		}
	}
}
