using System.Collections.Generic;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using TKLClient;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class ShopDialog : View
	{
		private RectTransform m_trans_Content;

		private RectTransform m_trans_RemoveAd;

		private Text m_txt_RemoveAd_Coins;

		private Text m_txt_RemoveAdWithCoins_Price;

		private Text m_txt_RemoveAd_Price;

		private Text m_txt_addProfit;

		private Button m_btn_sub;

		private Text m_txt_sub_Price;

		private Text m_txt_Coin1;

		private Text m_txt_Coin1_Price;

		private Text m_txt_Coin2;

		private Text m_txt_Coin2_Price;

		private Text m_txt_Coin3;

		private Text m_txt_Coin3_Price;

		private RectTransform m_trans_DiamondView;

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

		private void RefreshShopList()
		{
		}

		private void RefreshRemoveAds(ShopModel shopModel, Dictionary<string, TKLIAPInfo> map)
		{
		}

		private void RefreshCoinsList(ShopModel shopModel, Dictionary<string, TKLIAPInfo> map)
		{
		}

		private void PurchaseSuccess()
		{
		}

		[DoNotRename]
		public void OnCloseBtnClicked()
		{
		}

		[DoNotRename]
		public void OnSubscriptionClicked()
		{
		}

		[DoNotRename]
		public void OnRemoveAdWithCoinsClicked()
		{
		}

		[DoNotRename]
		public void OnRemoveAdClicked()
		{
		}

		[DoNotRename]
		public void OnCoinsClicked(int index)
		{
		}
	}
}
