using UnityEngine;
using UnityEngine.EventSystems;

namespace SoftMasking.Samples
{
	[RequireComponent(typeof(RectTransform))]
	public class ShowOnHover : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
	{
		public CanvasGroup targetGroup;

		private bool _forcedVisible;

		private bool _isPointerOver;

		public bool forcedVisible
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		protected override void Start()
		{
		}

		private void UpdateVisibility()
		{
		}

		private bool ShouldBeVisible()
		{
			return false;
		}

		private void SetVisible(bool visible)
		{
		}

		public void OnPointerEnter(PointerEventData eventData)
		{
		}

		public void OnPointerExit(PointerEventData eventData)
		{
		}
	}
}
