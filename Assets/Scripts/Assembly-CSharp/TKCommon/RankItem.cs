using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class RankItem : MonoBehaviour
	{
		private Image m_img_Bg;

		private Image m_img_mine_avatar;

		private Image m_img_border;

		private Text m_txt_UserName;

		private Image m_img_WeeklyScore;

		private TextMeshProUGUI m_tmpui_WeeklyScore;

		private Image m_img_TargetIcon;

		private Image m_img_RankScore;

		private Text m_txt_ScoreTitle;

		private TextMeshProUGUI m_tmpui_RankScore;

		private Text m_txt_rankIndex;

		private RectTransform m_trans_rank1;

		private RectTransform m_trans_rank2;

		private RectTransform m_trans_rank3;

		private RectTransform m_trans_Bubble;

		private Text m_txt_Bubble;

		[SerializeField]
		private Sprite[] m_BgSprites;

		[SerializeField]
		private Sprite[] m_ScoreBgSprites;

		[SerializeField]
		private Sprite[] m_BorderSprites;

		[SerializeField]
		private Color[] m_TextColors;

		[SerializeField]
		private Material[] m_FontMaterials;

		[SerializeField]
		public bool m_IsSelf;

		private const string _OTHER_RANK_COLOR = "#9D6431";

		public Image TargetIcon => null;

		public Image WeeklyScoreBg => null;

		private void GetBindComponents(GameObject go)
		{
		}

		private void Awake()
		{
		}

		public void SetUserData(RankModel model, bool isLeague)
		{
		}

		public void UpdateWeeklyScore(int score)
		{
		}

		public void UpdateRank(int rank)
		{
		}

		public void SetBubbleActive(bool active)
		{
		}
	}
}
