using UnityEngine;

namespace SoftMasking.TextMeshPro
{
	[GlobalMaterialReplacer]
	public class MaterialReplacer : IMaterialReplacer
	{
		public int order => 0;

		public Material Replace(Material material)
		{
			return null;
		}
	}
}
