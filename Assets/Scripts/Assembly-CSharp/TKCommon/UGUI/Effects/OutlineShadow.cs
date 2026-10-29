using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon.UGUI.Effects
{
	public class OutlineShadow : BaseMeshEffect
	{
		[SerializeField]
		private Color m_OutlineEffectColor;

		[SerializeField]
		private Vector2 m_OutlineEffectDistance;

		[SerializeField]
		private bool m_OutlineUseGraphicAlpha;

		[SerializeField]
		private Color m_ShadowEffectColor;

		[SerializeField]
		private Vector2 m_ShadowEffectDistance;

		[SerializeField]
		private bool m_ShadowUseGraphicAlpha;

		private const float kMaxEffectDistance = 600f;

		public Color outlineEffectColor
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		public Vector2 outlineEffectDistance
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		public bool outlineUseGraphicAlpha
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public Color shadowEffectColor
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		public Vector2 shadowEffectDistance
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		public bool shadowUseGraphicAlpha
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		protected Vector2 DistanceLimit(Vector2 value)
		{
			return default;
		}

		protected void ApplyShadowZeroAlloc(List<UIVertex> verts, Color32 color, int start, int end, float x, float y, bool useGraphicAlpha)
		{
		}

		public override void ModifyMesh(VertexHelper vh)
		{
		}
	}
}
