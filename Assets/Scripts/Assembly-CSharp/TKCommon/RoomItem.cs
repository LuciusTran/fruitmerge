using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class RoomItem : MonoBehaviour
	{
		private Image m_img_RoomPreview;

		private RectTransform m_trans_unlocked;

		private Text m_txt_Locked;

		private RectTransform m_trans_UnLockTitle;

		private Text m_txt_Unlock_RoomLevel;

		private RectTransform m_trans_LockTitle;

		private Text m_txt_Lock_RoomLevel;

		private RoomModel mRoomModel;

		private bool _isUnlocked;

		private bool _isBuilding;

		private int _level;

		public bool IsUnlocked
		{
			set
			{
			}
		}

		public bool IsBuilding
		{
			set
			{
			}
		}

		public int Level
		{
			set
			{
			}
		}

		private void GetBindComponents(GameObject go)
		{
		}

		public void SetRoomModel(RoomModel roomModel)
		{
		}

		[DoNotRename]
		public void OnClickedRoom()
		{
		}
	}
}
