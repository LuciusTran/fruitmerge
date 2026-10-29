using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class TaskCompleteView : View
	{
		private Image m_img_bg;

		private RectTransform m_trans_NoSkin;

		private RectTransform m_trans_box1;

		private Animator m_animator_Chest1;

		private RectTransform m_trans_coins_1;

		private Text m_txt_coins_1;

		private RectTransform m_trans_ClaimBtn1;

		private RectTransform m_trans_Skin;

		private RectTransform m_trans_box2;

		private Animator m_animator_Chest2;

		private RectTransform m_trans_coins_2;

		private Text m_txt_coins_2;

		private RectTransform m_trans_SkinRoot;

		private Image m_img_Skin;

		private RectTransform m_trans_SkinMask;

		private RectTransform m_trans_SkinMaskBottom;

		private RectTransform m_trans_ClaimBtn2;

		[SerializeField]
		private DiamondView mDiamondView;

		[SerializeField]
		private TicketView mTicketView;

		[SerializeField]
		private Image m_CoinsImage_1;

		[SerializeField]
		private Image m_CoinsImage_2;

		[SerializeField]
		private Sprite mCoinsSprite;

		[SerializeField]
		private Sprite mTicketsSprite;

		private int _rewardCoin;

		private int _rewardSkinProgress;

		private Vector3 _giftBoxStartPos;

		private string _rewardSkin;

		private bool _hasRewardSkin;

		private bool _gainSkin;

		private bool _claimed;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void ShowAnimationWithSkin(float startProgress, float endProgress)
		{
		}

		private void ShowAnimationWithoutSkin()
		{
		}

		public override void Show()
		{
		}

		[DoNotRename]
		public void SkinRootAnim()
		{
		}

		private void OnDestroy()
		{
		}

		public override void Close()
		{
		}

		private void RefreshReward()
		{
		}

		[DoNotRename]
		public void OnTapContinue()
		{
		}

		private void ClaimAction()
		{
		}
	}
}
