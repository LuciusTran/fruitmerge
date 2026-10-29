using System;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class ExpLevelUpDialog : View
	{
		private RectTransform m_trans_ClaimBtn;

		private Text m_txt_Level;

		private RectTransform m_trans_Coins;

		private Text m_txt_LevelUp_Coins;

		private RectTransform m_trans_Tickets;

		private Text m_txt_LevelUp_Tickets;

		private RectTransform m_trans_DiamondView;

		private RectTransform m_trans_TicketView;

		private Action _closeAction;

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
		public void OnClaimBtnClicked()
		{
		}

		private void ClaimCoins()
		{
		}

		private void ClaimTickets()
		{
		}
	}
}
