using System.Collections.Generic;
using UnityEngine;

public class ColorUtil
{
	private static Color gray;

	private static float min_g;

	private static float max_g;

	private static float a;

	private static float r;

	private static float g;

	private static float b;

	public static Texture2D CreatePureColorTexture2D(int width, int height, Color color)
	{
		return null;
	}

	public static Color GetPixelBilinear(float u, float v, int width, int height, Color[] pixels)
	{
		return default;
	}

	public static Color HexToColor(string hexColor)
	{
		return default;
	}

	public static string ColorToHex(Color color)
	{
		return null;
	}

	public static Texture2D GetGrayTex(Texture2D ori, out List<Color> colorCount)
	{
		colorCount = null;
		return null;
	}

	public static Color AdjustHSV(Color baseColor)
	{
		return default;
	}

	public static Color GetFitGray(Color baseColor)
	{
		return default;
	}

	public static float GetGray(Color color)
	{
		return 0f;
	}

	public static void AddColor(ref Color c1, Color c2)
	{
	}

	public static byte[] ConvertColor32ArrayToByteArray(Color32[] colors)
	{
		return null;
	}

	public static Texture2D TextureToTexture2D(Texture texture)
	{
		return null;
	}
}
