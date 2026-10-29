using System.Collections.Generic;
using UnityEngine;

namespace SoftMasking
{
	public class MaterialReplacerChain : IMaterialReplacer
	{
		private readonly List<IMaterialReplacer> _replacers;

		public int order { get; private set; }

		public MaterialReplacerChain(IEnumerable<IMaterialReplacer> replacers, IMaterialReplacer yetAnother)
		{
		}

		public Material Replace(Material material)
		{
			return null;
		}

		private void Initialize()
		{
		}
	}
}
