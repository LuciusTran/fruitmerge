using System;
using System.Collections.Generic;
using UnityEngine;

public class BuildHouse : MonoBehaviour
{
	private const string COMING_SOON = "ComingSoon";

	[SerializeField]
	private SpriteRenderer m_BgSR;

	[SerializeField]
	private GameObject m_BombEffectPrefab;

	private static readonly Vector3 ROOM_POSITION;

	private static readonly Vector3 ROOM_DEFAULT_SCALE;

	private static readonly Vector3 ROOM_BUILD_SCALE;

	private bool inBuilding;

	private GameObject mRoomObj;

	private RoomModel mRoomModel;

	private int mItemTotalCount;

	private Stack<Transform> mItemList;

	private Transform mWaitingBuyItem;

	private Transform mWaitingBuyItemShadow;

	private bool isShowCompeletView;

	public RoomModel CurrentRoomModel => null;

	public int CurrentFinishedGift => 0;

	public int CurrentTotalGift => 0;

	public bool CheckRoomCompleted()
	{
		return false;
	}

	public static BuildHouse CreateCurrentHouse()
	{
		return null;
	}

	public void EnterComingSoon()
	{
	}

	public void ChangeRoom(RoomModel roomModel)
	{
	}

	public void EnterBuilding(Action<int, int> onProgress, Action<Vector3, int, int> onEnterComplete)
	{
	}

	public void ExitBuilding()
	{
	}

	private void CleanShadow()
	{
	}

	public void DestroyRoom()
	{
	}

	public void BuyCurrentItem(Action<bool, int, int> completedAction)
	{
	}

	public bool GoNextRoom()
	{
		return false;
	}

	public void FindCurrentBuyItem(Action<Vector3, int, int> onNewItemComplete)
	{
	}

	public int GetCurrentItemTicket()
	{
		return 0;
	}

	public void SaveCurrentItemCost(int current)
	{
	}

	public void CheatCompleteCurrentRoom()
	{
	}

	private int GetMaxOrder(Transform root)
	{
		return 0;
	}

	private void GetSpriteRendererS(Transform root, List<GameObject> collectedRenderers)
	{
	}

	private void CreateShadow(Transform item)
	{
	}

	private void RemoveShadowChildren(Transform item)
	{
	}

	private void LoadComingSoon()
	{
	}

	private void LoadRoom(RoomModel roomModel)
	{
	}
}
