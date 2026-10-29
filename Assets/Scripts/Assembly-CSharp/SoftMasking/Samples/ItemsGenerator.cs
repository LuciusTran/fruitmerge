using UnityEngine;

namespace SoftMasking.Samples
{
	public class ItemsGenerator : MonoBehaviour
	{
		public RectTransform target;

		public Sprite image;

		public int count;

		public string baseName;

		public Item itemPrefab;

		private static readonly Color[] colors;

		public void Generate()
		{
		}

		private void DestroyChildren()
		{
		}
	}
}
