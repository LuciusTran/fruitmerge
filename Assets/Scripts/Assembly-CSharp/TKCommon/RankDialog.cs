using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class RankDialog : View
	{
		[CompilerGenerated]
		private sealed class _003CPopulateListCoroutine_003Ed__60 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public RankDialog _003C_003E4__this;

			private bool _003CisLeague_003E5__2;

			private ScrollRect _003CcurrentScrollRect_003E5__3;

			private int _003CitemCount_003E5__4;

			private int _003CitemsPerFrame_003E5__5;

			private int _003Ci_003E5__6;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CPopulateListCoroutine_003Ed__60(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		private RectTransform m_trans_LeagueRoot;

		private Image m_img_FirstAvatar;

		private Text m_txt_First;

		private TextMeshProUGUI m_tmpui_FirstScore;

		private Image m_img_First;

		private Image m_img_SecondAvatar;

		private Text m_txt_Second;

		private TextMeshProUGUI m_tmpui_SecondScore;

		private Image m_img_Second;

		private Image m_img_ThirdAvatar;

		private Text m_txt_Third;

		private TextMeshProUGUI m_tmpui_ThirdScore;

		private Image m_img_Third;

		private Text m_txt_CountDown;

		private ScrollRect m_scrollrect_League;

		private RectTransform m_trans_RankRoot;

		private ScrollRect m_scrollrect_Rank;

		private Image m_img_League;

		private Text m_txt_League;

		private Image m_img_Global;

		private Text m_txt_Global;

		private RectTransform m_trans_Loading;

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
		private Color[] m_Switch_Colors;

		[SerializeField]
		private Color[] m_Switch_Border_Colors;

		[SerializeField]
		private GameObject m_ItemPrefab;

		[SerializeField]
		private RankItem m_MineRankItem;

		[Header("浮标高度偏移 (相对于Viewport的额外高度)")]
		[SerializeField]
		private float m_FloatingOffsetY;

		private int CategoryIndex;

		private RankListModel m_RankListModel;

		private RankListModel m_GlobalRankListModel;

		private List<RankModel> m_TopRankList;

		private RankItem m_TargetRankItem;

		private bool _isLeagueBubbleAllowed;

		private Coroutine _populationCoroutine;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		public override void Show()
		{
		}

		private void OnDestroy()
		{
		}

		private void Update()
		{
		}

		private Bounds GetWorldBounds(RectTransform rectTransform)
		{
			return default;
		}

		private List<RankModel> FilterScore0(RankListModel model)
		{
			return null;
		}

		private void RefreshList()
		{
		}

		private void RefreshMine()
		{
		}

		public void StartPopulateList()
		{
		}

		[IteratorStateMachine(typeof(_003CPopulateListCoroutine_003Ed__60))]
		private IEnumerator PopulateListCoroutine()
		{
			return null;
		}

		[DoNotRename]
		public void OnCloseBtnClicked()
		{
		}

		[DoNotRename]
		public void OnGlobalBtnClicked()
		{
		}

		[DoNotRename]
		public void OnLeagueBtnClicked()
		{
		}

		private void LoadList()
		{
		}
	}
}
