using System;
using System.Collections.Generic;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class DailyRewardDialog : View
	{
		private RectTransform m_trans_ClaimBtn;

		private RectTransform m_trans_normal_day1;

		private RectTransform m_trans_today_day1;

		private Image m_img_day1;

		private RectTransform m_trans_finish_day1;

		private RectTransform m_trans_normal_day2;

		private RectTransform m_trans_today_day2;

		private Image m_img_day2;

		private RectTransform m_trans_finish_day2;

		private RectTransform m_trans_normal_day3;

		private RectTransform m_trans_today_day3;

		private Image m_img_day3;

		private RectTransform m_trans_finish_day3;

		private RectTransform m_trans_normal_day4;

		private RectTransform m_trans_today_day4;

		private Image m_img_day4;

		private RectTransform m_trans_finish_day4;

		private RectTransform m_trans_normal_day5;

		private RectTransform m_trans_today_day5;

		private Image m_img_day5;

		private RectTransform m_trans_finish_day5;

		private RectTransform m_trans_normal_day6;

		private RectTransform m_trans_today_day6;

		private Image m_img_day6;

		private RectTransform m_trans_finish_day6;

		private RectTransform m_trans_normal_day7;

		private RectTransform m_trans_today_day7;

		private Image m_img_day7_1;

		private Image m_img_day7_2;

		private Image m_img_day7_3;

		private Image m_img_day7_4;

		private RectTransform m_trans_finish_day7;

		private RectTransform m_trans_normal_day8;

		private RectTransform m_trans_today_day8;

		private Image m_img_day8;

		private RectTransform m_trans_finish_day8;

		private RectTransform m_trans_normal_day9;

		private RectTransform m_trans_today_day9;

		private Image m_img_day9;

		private RectTransform m_trans_finish_day9;

		private RectTransform m_trans_normal_day10;

		private RectTransform m_trans_today_day10;

		private Image m_img_day10;

		private RectTransform m_trans_finish_day10;

		private RectTransform m_trans_normal_day11;

		private RectTransform m_trans_today_day11;

		private Image m_img_day11;

		private RectTransform m_trans_finish_day11;

		private RectTransform m_trans_normal_day12;

		private RectTransform m_trans_today_day12;

		private Image m_img_day12;

		private RectTransform m_trans_finish_day12;

		private RectTransform m_trans_normal_day13;

		private RectTransform m_trans_today_day13;

		private Image m_img_day13;

		private RectTransform m_trans_finish_day13;

		private RectTransform m_trans_normal_day14;

		private RectTransform m_trans_today_day14;

		private Image m_img_day14_1;

		private Image m_img_day14_2;

		private Image m_img_day14_3;

		private Image m_img_day14_4;

		private RectTransform m_trans_finish_day14;

		private RectTransform m_trans_normal_day15;

		private RectTransform m_trans_today_day15;

		private RectTransform m_trans_finish_day15;

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

		private List<DailyRewardModel> mRewardList;

		private DailyRewardModel mCurrentReward;

		private Action<DailyRewardModel> _claimAction;

		private Action _onCloseDialogAction;

		private int currentDay;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void RefreshRewardList()
		{
		}

		private void RefreshReward(DailyRewardModel reward)
		{
		}

		private void RefreshItemStatus(int day, int currentDay, Transform normal, Transform today, Transform finish)
		{
		}

		private List<Tuple<Sprite, string>> GetSprite(DailyRewardModel reward)
		{
			return null;
		}

		[DoNotRename]
		public void OnCloseViewClicked()
		{
		}

		[DoNotRename]
		public void OnClaimBtnClicked()
		{
		}
	}
}
