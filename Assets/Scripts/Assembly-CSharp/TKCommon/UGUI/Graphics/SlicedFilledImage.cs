using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;
using UnityEngine.UI;

namespace TKCommon.UGUI.Graphics
{
	[RequireComponent(typeof(CanvasRenderer))]
	[AddComponentMenu("UI/Sliced Filled Image", 11)]
	public class SlicedFilledImage : MaskableGraphic, ISerializationCallbackReceiver, ILayoutElement, ICanvasRaycastFilter
	{
		private static class SetPropertyUtility
		{
			public static bool SetStruct<T>(ref T currentValue, T newValue) where T : struct
			{
				return false;
			}

			public static bool SetClass<T>(ref T currentValue, T newValue) where T : class
			{
				return false;
			}
		}

		public enum FillDirection
		{
			Right = 0,
			Left = 1,
			Up = 2,
			Down = 3
		}

		private static readonly Vector3[] s_Vertices;

		private static readonly Vector2[] s_UVs;

		private static readonly Vector2[] s_SlicedVertices;

		private static readonly Vector2[] s_SlicedUVs;

		[SerializeField]
		private Sprite m_Sprite;

		[SerializeField]
		private FillDirection m_FillDirection;

		[Range(0f, 1f)]
		[SerializeField]
		private float m_FillAmount;

		[SerializeField]
		private bool m_FillCenter;

		[SerializeField]
		private float m_PixelsPerUnitMultiplier;

		[NonSerialized]
		private Sprite m_OverrideSprite;

		private bool m_Tracked;

		private static List<SlicedFilledImage> m_TrackedTexturelessImages;

		private static bool s_Initialized;

		public Sprite sprite
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public FillDirection fillDirection
		{
			get
			{
				return FillDirection.Right;
			}
			set
			{
			}
		}

		public float fillAmount
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public bool fillCenter
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public float pixelsPerUnitMultiplier
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public float pixelsPerUnit => 0f;

		public Sprite overrideSprite
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		private Sprite activeSprite => null;

		public override Texture mainTexture => null;

		public bool hasBorder => false;

		public override Material material
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public float alphaHitTestMinimumThreshold { get; set; }

		int ILayoutElement.layoutPriority => 0;

		float ILayoutElement.minWidth => 0f;

		float ILayoutElement.minHeight => 0f;

		float ILayoutElement.flexibleWidth => 0f;

		float ILayoutElement.flexibleHeight => 0f;

		float ILayoutElement.preferredWidth => 0f;

		float ILayoutElement.preferredHeight => 0f;

		protected SlicedFilledImage()
		{
		}

		protected override void OnEnable()
		{
		}

		protected override void OnDisable()
		{
		}

		protected override void OnPopulateMesh(VertexHelper vh)
		{
		}

		protected override void UpdateMaterial()
		{
		}

		private void GenerateSlicedFilledSprite(VertexHelper vh)
		{
		}

		private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect)
		{
			return default;
		}

		private void GenerateFilledSprite(VertexHelper vh, Vector4 vertices, Vector4 uvs, float fillAmount)
		{
		}

		void ILayoutElement.CalculateLayoutInputHorizontal()
		{
		}

		void ILayoutElement.CalculateLayoutInputVertical()
		{
		}

		bool ICanvasRaycastFilter.IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera)
		{
			return false;
		}

		void ISerializationCallbackReceiver.OnBeforeSerialize()
		{
		}

		void ISerializationCallbackReceiver.OnAfterDeserialize()
		{
		}

		private void TrackImage()
		{
		}

		private void UnTrackImage()
		{
		}

		private static void RebuildImage(SpriteAtlas spriteAtlas)
		{
		}
	}
}
