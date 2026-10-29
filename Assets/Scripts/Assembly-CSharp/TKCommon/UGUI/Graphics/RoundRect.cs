using UnityEngine;
using UnityEngine.UI;

namespace TKCommon.UGUI.Graphics
{
	public class RoundRect : Image
	{
		[SerializeField]
		private float m_Radius;

		[SerializeField]
		private VertexColorGradient m_ColorGradient;

		[SerializeField]
		protected ColorMode m_colorMode;

		[SerializeField]
		private bool m_EnableColorGradient;

		[SerializeField]
		private CornerRoundSwitch m_CornerRoundSwitch;

		private static readonly Vector2[] s_VertScratch;

		private static readonly Vector2[] s_UVScratch;

		public float radius
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public override void SetVerticesDirty()
		{
		}

		protected override void OnPopulateMesh(VertexHelper toFill)
		{
		}

		protected void GenerateSimpleSprite(VertexHelper vh, bool lPreserveAspect)
		{
		}

		private static Color GetVertexColor(VertexColorGradient colorGradient, Vector2 normalizedPosition)
		{
			return default;
		}

		protected void GenerateSlicedSprite(VertexHelper toFill)
		{
		}

		protected Vector4 GetDrawingDimensions(bool shouldPreserveAspect)
		{
			return default;
		}

		protected Vector4 GetAdjustedBorders(Vector4 border, Rect rect)
		{
			return default;
		}

		protected void AddQuad(VertexHelper vertexHelper, Vector2 posMin, Vector2 posMax, Color32 color, Vector2 uvMin, Vector2 uvMax)
		{
		}
	}
}
