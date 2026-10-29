using UnityEngine;

namespace SoftMasking.Samples
{
	public class Minimap : MonoBehaviour
	{
		public RectTransform map;

		public RectTransform marker;

		[Space]
		public float minZoom;

		public float maxZoom;

		public float zoomStep;

		private float _zoom;

		public void LateUpdate()
		{
		}

		public void ZoomIn()
		{
		}

		public void ZoomOut()
		{
		}

		private float Clamp(float zoom)
		{
			return 0f;
		}
	}
}
