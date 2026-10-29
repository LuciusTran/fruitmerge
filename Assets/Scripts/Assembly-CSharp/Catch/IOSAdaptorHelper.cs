using UnityEngine;

namespace Catch
{
	public class IOSAdaptorHelper : MonoBehaviour
	{
		private enum AdaptorFrequency
		{
			Once = 0,
			Force = 1
		}

		[SerializeField]
		private AdaptorFrequency Frequency;

		[SerializeField]
		private bool OnlyAdaptorIOS;

		[SerializeField]
		private AdaptorType Type;

		[SerializeField]
		public bool OnlyX;

		[SerializeField]
		public bool OnlyY;

		[Header("Iphone8")]
		[SerializeField]
		public float Iphone8Scale;

		[SerializeField]
		public Vector2 Iphone8Offset;

		[Header("IphoneX")]
		[SerializeField]
		public float IphoneXScale;

		[SerializeField]
		public Vector2 IphoneXOffset;

		[Header("Ipad")]
		[SerializeField]
		public float IpadScale;

		[SerializeField]
		public Vector2 IpadOffset;

		[SerializeField]
		private bool AdaptorAndroidIpad;

		[Header("AndroidIpad")]
		[SerializeField]
		public float AndroidIpadScale;

		[SerializeField]
		public Vector2 AndroidIpadOffset;

		private Vector3 temp;

		private Vector3 oriVector;

		private Vector2 sizeTemp;

		private Vector2 oriSize;

		private Vector2 oriPos;

		private RectTransform rect;

		private void Awake()
		{
		}

		private void HandleAdaptor()
		{
		}

		private void HandleAdaptor(float scale, Vector2 offset)
		{
		}

		public float GetAdaptionScale()
		{
			return 0f;
		}

		public bool IsActiveAndroidPad()
		{
			return false;
		}
	}
}
