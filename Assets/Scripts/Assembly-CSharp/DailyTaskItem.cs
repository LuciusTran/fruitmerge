using System;
using TKCommon;
using UnityEngine;
using UnityEngine.UI;

public class DailyTaskItem : MonoBehaviour
{
	[SerializeField]
	private Sprite[] _bgSprites;

	private DailyTaskModel taskModel;

	private Image _bg;

	private NormalClickButton _btnClaim;

	private CanvasGroup _group;

	private RectTransform _desRoot;

	private Image _imgFruit;

	private Text _txtDes;

	private Image _imgProgress;

	private Text _txtProgress;

	private Transform _scoreRoot;

	private Text _txtScore;

	private Transform _complete;

	private Action<DailyTaskItem, DailyTaskModel> _onClaim;

	private Vector2 _defaultDesPos;

	public Transform ScoreRoot => null;

	private void Awake()
	{
	}

	private void BindComponents()
	{
	}

	public void SetItemData(DailyTaskModel task, Action<DailyTaskItem, DailyTaskModel> onClaim)
	{
	}

	private void OnDestroy()
	{
	}

	private void OnClaimBtnClick()
	{
	}
}
