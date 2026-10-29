using System;
using UnityEngine;

namespace TKCommon.UGUI.Graphics
{
	[Serializable]
	public struct VertexColorGradient
	{
		public Color topLeft;

		public Color topRight;

		public Color bottomLeft;

		public Color bottomRight;

		public VertexColorGradient(Color color)
		{
			topLeft = default;
			topRight = default;
			bottomLeft = default;
			bottomRight = default;
		}

		public VertexColorGradient(Color color0, Color color1, Color color2, Color color3)
		{
			topLeft = default;
			topRight = default;
			bottomLeft = default;
			bottomRight = default;
		}
	}
}
