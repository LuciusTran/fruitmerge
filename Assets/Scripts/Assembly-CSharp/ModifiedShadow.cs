using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ModifiedShadow : Shadow
{
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	public virtual void ModifyVertices(List<UIVertex> verts)
	{
	}
}
