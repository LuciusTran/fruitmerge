using UnityEngine;

namespace SoftMasking.Extensions
{
	public static class MaterialOps
	{
		public static bool SupportsSoftMask(this Material mat)
		{
			return false;
		}

		public static bool HasDefaultUIShader(this Material mat)
		{
			return false;
		}

		public static bool HasDefaultETC1UIShader(this Material mat)
		{
			return false;
		}

		public static void EnableKeyword(this Material mat, string keyword, bool enabled)
		{
		}
	}
}
