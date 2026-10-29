using UnityEngine;
using UnityEngine.EventSystems;

namespace TKCommon
{
	public class NormalClickButton : BaseButton
	{
		[SerializeField]
		private float m_TargetScale;

		private float m_ClickDelay;

		private float m_LastClickTime;

		public override void OnPointerDown(PointerEventData eventData)
		{
		}

		public override void OnPointerUp(PointerEventData eventData)
		{
		}

		public override void OnPointerExit(PointerEventData eventData)
		{
		}

		public override void OnPointerClick(PointerEventData eventData)
		{
		}

		protected override void OnDestroy()
		{
		}
	}
}
