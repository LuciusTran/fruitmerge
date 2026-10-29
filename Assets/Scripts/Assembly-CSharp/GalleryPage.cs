using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GalleryPage : MainBasePage
{
	[SerializeField]
	private GameObject m_ItemPrefab;

	[SerializeField]
	private ScrollRect m_ScrollRect;

	internal override void Init()
	{
	}

	internal override void Show()
	{
	}

	private void CleanScrollRect()
	{
	}

	private void PopulateList(List<RoomModel> roomList, RoomModel currentRoomModel)
	{
	}
}
