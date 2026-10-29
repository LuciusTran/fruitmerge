using UnityEngine;

public class ColoredHeaderAttribute : PropertyAttribute
{
	public readonly string headerText;

	public readonly Color textColor;

	public readonly int fontSize;

	public readonly FontStyle fontStyle;

	public readonly TextAnchor alignment;

	public ColoredHeaderAttribute(string headerText, float r, float g, float b, int fontSize = 14, FontStyle fontStyle = FontStyle.Bold, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
	}
}
