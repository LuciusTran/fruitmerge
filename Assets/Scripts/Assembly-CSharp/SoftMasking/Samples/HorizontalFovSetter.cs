using UnityEngine;

namespace SoftMasking.Samples
{
	[RequireComponent(typeof(Camera))]
	public class HorizontalFovSetter : MonoBehaviour
	{
		public float horizontalFov;

		private Camera _camera;

		public void Awake()
		{
		}

		public void Update()
		{
		}
	}
}
