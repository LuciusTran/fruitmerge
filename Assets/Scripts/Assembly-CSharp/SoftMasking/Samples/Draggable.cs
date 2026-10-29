using UnityEngine;
using UnityEngine.EventSystems;

namespace SoftMasking.Samples
{
	[RequireComponent(typeof(RectTransform))]
	public class Draggable : UIBehaviour, IDragHandler, IEventSystemHandler
	{
		private RectTransform _rectTransform;

		protected override void Awake()
		{
		}

		public void OnDrag(PointerEventData eventData)
		{
		}
	}
}
