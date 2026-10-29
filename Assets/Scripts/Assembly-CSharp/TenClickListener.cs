using UnityEngine;
using UnityEngine.EventSystems;

public class TenClickListener : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Header("点击设置")]
	[Tooltip("需要连续点击多少次来触发事件")]
	[Min(1f)]
	public int requiredClicks;

	[Tooltip("连续点击的判定时间（秒）。如果两次点击间隔超过这个时间，计数将重置。")]
	public float timeLimit;

	private int currentClickCount;

	private float lastClickTime;

	public void OnPointerClick(PointerEventData eventData)
	{
	}

	private bool CanClicked()
	{
		return false;
	}
}
