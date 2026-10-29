using System;
using System.Collections.Generic;
using DG.Tweening;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class DailyRewardCollectView : View
	{
		private Button m_btn_bg;

		private RectTransform m_trans_Reward;

		private RectTransform m_trans_RewardTitle;

		private RectTransform m_trans_xingixng;

		private RectTransform m_trans_one;

		private Text m_txt_coins;

		private RectTransform m_trans_skin;

		private RectTransform m_trans_Coin;

		private RectTransform m_trans_multiply;

		private RectTransform m_trans_1;

		private RectTransform m_trans_2;

		private RectTransform m_trans_3;

		private RectTransform m_trans_4;

		private RectTransform m_trans_lihe;

		private RectTransform m_trans_beiguang2;

		private RectTransform m_trans_beiguang3;

		private RectTransform m_trans_Giftbox;

		private RectTransform m_trans_TapToContinue;

		[SerializeField]
		private Sprite m_Clean_Sprite;

		[SerializeField]
		private Sprite m_Upgrade_Sprite;

		[SerializeField]
		private Sprite m_Bomb_Sprite;

		[SerializeField]
		private Sprite m_Shake_Sprite;

		[SerializeField]
		private Sprite m_Coin_Sprite;

		private DailyRewardModel mCurrentReward;

		private Sequence complete_seq;

		private Action m_OnCloseCallback;

		private string _itemWhere;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void OnDestroy()
		{
		}

		private List<Tuple<Sprite, string>> GetSprite(DailyRewardModel reward)
		{
			return null;
		}

		[DoNotRename]
		public void OnTapContinue()
		{
		}

		private void SetText(Transform parent, string val)
		{
		}
	}
}
