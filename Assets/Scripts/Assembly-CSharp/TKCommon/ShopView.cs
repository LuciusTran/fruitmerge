using System.Collections.Generic;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using TKLClient;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class ShopView : View
	{
		private RectTransform m_trans_RemoveAd;

		private Text m_txt_RemoveAd_Coins;

		private Text m_txt_RemoveAdWithCoins_Price;

		private Text m_txt_RemoveAd_Price;

		private Text m_txt_addProfit;

		private NormalClickButton m_btn_sub;

		private Text m_txt_sub_Price;

		private RectTransform m_trans_StarterBundle;

		private Text m_txt_coins;

		private RectTransform m_trans_Clean;

		private Text m_txt_Clean;

		private RectTransform m_trans_Bomb;

		private Text m_txt_Bomb;

		private RectTransform m_trans_Upgrade;

		private Text m_txt_Upgrade;

		private RectTransform m_trans_Shake;

		private Text m_txt_Shake;

		private Text m_txt_StarterBundle_Price;

		private Text m_txt_Coin1;

		private Text m_txt_Coin1_Price;

		private Text m_txt_Coin2;

		private Text m_txt_Coin2_Price;

		private Text m_txt_Coin3;

		private Text m_txt_Coin3_Price;

		private Text m_txt_Coin4;

		private Text m_txt_Coin4_Price;

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

		private void RefreshStarterBundle(ShopModel shopModel, Dictionary<string, TKLIAPInfo> map)
		{
		}

		private void RefreshCoinsList(ShopModel shopModel, Dictionary<string, TKLIAPInfo> map)
		{
		}

		[DoNotRename]
		public void OnCloseBtnClicked()
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
		public void OnSubscriptionClicked()
		{
		}

		[DoNotRename]
		public void OnStarterBundleClicked()
		{
		}

		[DoNotRename]
		public void OnCoinsClicked(int index)
		{
		}

		private void PurchaseSuccess()
		{
		}
	}
}
