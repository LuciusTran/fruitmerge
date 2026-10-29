using System;
using System.Collections.Generic;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using TKLClient;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class BuyToolDialog : View
	{
		private Text m_txt_Title;

		private Image m_img_Tool;

		private Text m_txt_ToolDescription;

		private Text m_txt_Diamond;

		private NormalClickButton m_btn_Ad;

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

		[SerializeField]
		private Sprite[] m_ToolSprites;

		private ToolType _toolType;

		private Action _getToolAction;

		private int _costDiamond;

		private bool _isClosed;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void RefreshShopList()
		{
		}

		private void RefreshStarterBundle(ShopModel shopModel, Dictionary<string, TKLIAPInfo> map)
		{
		}

		private void RefreshViews()
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
		public void OnDiamondViewClicked()
		{
		}

		[DoNotRename]
		public void OnStarterBundleClicked()
		{
		}

		private void PurchaseSuccess()
		{
		}

		[DoNotRename]
		public void OnBuyToolClicked()
		{
		}

		[DoNotRename]
		public void OnGetToolByAds()
		{
		}

		private void AddToolCount(string way)
		{
		}
	}
}
