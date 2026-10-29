using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;

public class PressableImage : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
{
	[Tooltip("当指针（鼠标或手指）在此对象上按下时调用")]
	public UnityEvent OnPress;

	[Tooltip("当指针在此对象上抬起时调用（无论指针是否还在对象内部）")]
	public UnityEvent OnRelease;

	private bool _isPressed;

	public bool IsPressed => false;

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}
}
