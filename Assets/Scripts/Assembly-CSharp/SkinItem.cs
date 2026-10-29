using TKCommon;
using UnityEngine;
using UnityEngine.UI;

public class SkinItem : MonoBehaviour
{
	public enum E_SkinItem_State
	{
		Using = 0,
		WaitUse = 1,
		ComingSoon = 2,
		UnlockByScore = 3,
		UnlockByRank = 4,
		UnlockByTask = 5,
		UnlockByRoom = 6,
		UnlockByDaily = 7
	}

	[SerializeField]
	private Sprite[] _btnSprites;

	private Transform _trans;

	private Image _imgSkin;

	private GameObject _imgLock;

	private GameObject _imgMask;

	private GameObject _txtComingSoon;

	private NormalClickButton _btnSkin;

	private Text _txtUseState;

	private Text _txtUnlock;

	private CircleOutline _txtUseStateOutline;

	private Shadow _txtUseStateShadow;

	private GameObject _progressRoot;

	private Image _imgProgress;

	private Text _txtProgress;

	private NormalClickButton _btnInfo;

	private HomeView _homeView;

	private string _skinName;

	private bool _isHomeView;

	private E_SkinItem_State _currentState;

	private const string _UNLOCK_HIGHLIGHT_COLOR = "#FFD83D";

	private const string _UNLOCK_SCORE_MSG = "Score _N_ total to unlock.";

	private const string _UNLOCK_RANK_MSG = "Top _N_ in League to unlock.";

	private const string _UNLOCK_TASK_MSG = "Complete _N_ quests to unlock.";

	private const string _UNLOCK_ROOM_MSG = "Complete Room _N_ to unlock.";

	private const string _UNLOCK_DAILY_MSG = "Daily Reward";

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void SetState(E_SkinItem_State state, SkinItemData itemData, bool homeView = true)
	{
	}

	private void OnSwitchUsingSkin(string currentUsingSkin)
	{
	}

	private void UpdateUserSkin()
	{
	}

	private void AddSkin()
	{
	}

	private void OnBtnUse()
	{
	}
}
