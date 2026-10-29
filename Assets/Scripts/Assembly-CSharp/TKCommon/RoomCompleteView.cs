using DG.Tweening;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class RoomCompleteView : View
	{
		private Button m_btn_bg;

		private RectTransform m_trans_Completed;

		private RectTransform m_trans_title;

		private RectTransform m_trans_caidai;

		private RectTransform m_trans_Room;

		private Image m_img_RoomPreview;

		private Text m_txt_RoomLevel;

		private RectTransform m_trans_Reward;

		private RectTransform m_trans_RewardTitle;

		private RectTransform m_trans_xingixng;

		private RectTransform m_trans_coins;

		private Text m_txt_coins;

		private RectTransform m_trans_clean;

		private Text m_txt_clean;

		private RectTransform m_trans_bomb;

		private Text m_txt_bomb;

		private RectTransform m_trans_shake;

		private Text m_txt_shake;

		private RectTransform m_trans_upgrade;

		private Text m_txt_upgrade;

		private RectTransform m_trans_lihe;

		private RectTransform m_trans_beiguang2;

		private RectTransform m_trans_beiguang3;

		private RectTransform m_trans_Giftbox;

		private RectTransform m_trans_TapToContinue;

		private RoomModel mRoomModel;

		private Sequence complete_seq;

		private Sequence reward_seq;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void RefreshReward()
		{
		}

		private void ShowCompleteAnimation()
		{
		}

		private void ShowRewardAnimation()
		{
		}

		private void OnDestroy()
		{
		}

		[DoNotRename]
		public void OnTapContinue()
		{
		}

		private void TryUnlockRoomSkin()
		{
		}
	}
}
