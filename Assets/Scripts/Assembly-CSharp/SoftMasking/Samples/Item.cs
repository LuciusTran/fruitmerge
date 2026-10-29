using UnityEngine;
using UnityEngine.UI;

namespace SoftMasking.Samples
{
	public class Item : MonoBehaviour
	{
		public Image image;

		public Text title;

		public Text description;

		public RectTransform healthBar;

		public RectTransform damageBar;

		public void Set(string name, Sprite sprite, Color color, float health, float damage)
		{
		}
	}
}
