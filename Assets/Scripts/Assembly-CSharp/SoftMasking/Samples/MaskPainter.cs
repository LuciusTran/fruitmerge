using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace SoftMasking.Samples
{
	[RequireComponent(typeof(RectTransform))]
	public class MaskPainter : UIBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
	{
		public Graphic spot;

		public RectTransform stroke;

		private RectTransform _rectTransform;

		protected override void Awake()
		{
		}

		protected override void Start()
		{
		}

		public void OnPointerDown(PointerEventData eventData)
		{
		}

		public void OnDrag(PointerEventData eventData)
		{
		}

		private void UpdateStrokeByEvent(PointerEventData eventData, bool drawTrail = false)
		{
		}

		private void UpdateStrokePosition(Vector2 screenPosition, bool drawTrail = false)
		{
		}

		private void SetUpTrail(Vector2 prevPosition)
		{
		}

		private void UpdateStrokeColor(PointerEventData.InputButton pressedButton)
		{
		}
	}
}
