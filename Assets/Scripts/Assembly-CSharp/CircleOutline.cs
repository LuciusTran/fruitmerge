using System.Collections.Generic;
using UnityEngine;

public class CircleOutline : ModifiedShadow
{
	[SerializeField]
	private int m_circleCount;

	[SerializeField]
	private int m_firstSample;

	[SerializeField]
	private int m_sampleIncrement;

	public int circleCount
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int firstSample
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int sampleIncrement
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public override void ModifyVertices(List<UIVertex> verts)
	{
	}
}
