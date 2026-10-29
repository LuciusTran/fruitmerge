using System;

namespace TKCommon.UGUI.Graphics
{
	[Serializable]
	public struct CornerRoundSwitch
	{
		public bool topLeft;

		public bool topRight;

		public bool bottomLeft;

		public bool bottomRight;

		public CornerRoundSwitch(bool isOn)
		{
			topLeft = false;
			topRight = false;
			bottomLeft = false;
			bottomRight = false;
		}

		public CornerRoundSwitch(bool isOn1, bool isOn2, bool isOn3, bool isOn4)
		{
			topLeft = false;
			topRight = false;
			bottomLeft = false;
			bottomRight = false;
		}
	}
}
