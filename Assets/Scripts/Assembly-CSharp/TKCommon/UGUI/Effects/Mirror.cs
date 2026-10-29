using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon.UGUI.Effects
{
	[AddComponentMenu("UI/Effects/Mirror", 20)]
	[RequireComponent(typeof(Graphic))]
	public class Mirror : BaseMeshEffect
	{
		public enum MirrorType
		{
			Horizontal = 0,
			Vertical = 1,
			Quarter = 2
		}

		[SerializeField]
		private MirrorType m_MirrorType;

		[NonSerialized]
		private RectTransform m_RectTransform;

		public MirrorType mirrorType
		{
			get
			{
				return MirrorType.Horizontal;
			}
			set
			{
			}
		}

		public RectTransform rectTransform => null;

		public void SetNativeSize()
		{
		}

		public override void ModifyMesh(VertexHelper vh)
		{
		}

		protected void DrawSimple(List<UIVertex> output, int count)
		{
		}

		protected void DrawSliced(List<UIVertex> output, int count)
		{
		}

		protected void DrawTiled(List<UIVertex> verts, int count)
		{
		}

		protected void ExtendCapacity(List<UIVertex> verts, int addCount)
		{
		}

		protected void SimpleScale(Rect rect, List<UIVertex> verts, int count)
		{
		}

		protected void SlicedScale(Rect rect, List<UIVertex> verts, int count)
		{
		}

		protected void MirrorVerts(Rect rect, List<UIVertex> verts, int count, bool isHorizontal = true)
		{
		}

		protected int SliceExcludeVerts(List<UIVertex> verts, int count)
		{
			return 0;
		}

		protected Vector4 GetAdjustedBorders(Rect rect)
		{
			return default;
		}

		protected float GetCenter(float p1, float p2, float p3)
		{
			return 0f;
		}

		protected Vector2 GetOverturnUV(Vector2 uv, float start, float end, bool isHorizontal = true)
		{
			return default;
		}
	}
}
