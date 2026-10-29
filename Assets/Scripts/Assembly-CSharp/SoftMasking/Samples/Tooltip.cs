using UnityEngine;
using UnityEngine.EventSystems;

namespace SoftMasking.Samples
{
	public class Tooltip : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
	{
		public RectTransform tooltip;

		public void LateUpdate()
		{
		}

		void IPointerEnterHandler.OnPointerEnter(PointerEventData eventData)
		{
		}

		void IPointerExitHandler.OnPointerExit(PointerEventData eventData)
		{
		}
	}
}
