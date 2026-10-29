using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace TKCommon
{
	public class BaseButton : Button
	{
		protected Vector3 m_OriLocalScale;

		protected bool m_IsClick;

		private bool m_HasInit;

		[SerializeField]
		private bool m_ForceMuteSound;

		[HideInInspector]
		public bool CanClick;

		[HideInInspector]
		public bool CanPlaySound;

		protected override void Awake()
		{
		}

		protected override void Start()
		{
		}

		protected override void OnDisable()
		{
		}

		public override void OnPointerDown(PointerEventData eventData)
		{
		}

		public override void OnMove(AxisEventData eventData)
		{
		}
	}
}
