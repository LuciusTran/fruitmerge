using System;
using System.Collections.Generic;
using UnityEngine;

namespace SoftMasking
{
	internal class MaterialReplacements
	{
		private class MaterialOverride
		{
			private int _useCount;

			public Material original { get; private set; }

			public Material replacement { get; private set; }

			public MaterialOverride(Material original, Material replacement)
			{
			}

			public Material Get()
			{
				return null;
			}

			public bool Release()
			{
				return false;
			}
		}

		private readonly IMaterialReplacer _replacer;

		private readonly Action<Material> _applyParameters;

		private readonly List<MaterialOverride> _overrides;

		public MaterialReplacements(IMaterialReplacer replacer, Action<Material> applyParameters)
		{
		}

		public Material Get(Material original)
		{
			return null;
		}

		public void Release(Material replacement)
		{
		}

		public void ApplyAll()
		{
		}

		public void DestroyAllAndClear()
		{
		}
	}
}
