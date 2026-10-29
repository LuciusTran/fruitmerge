using System;
using System.Collections.Generic;
using UnityEngine;

public class Util
{
	public delegate bool Contrast<T>(T t1, T t2);

	public const string keyPng = ".png";

	public const string keyPnng = ".pnng";

	public const string keyJpg = ".jpg";

	public const string keyJppg = ".jppg";

	public const string keyZip = ".zip";

	public const string keyZiip = ".ziip";

	private const string Key = "72uyenak873ajk80";

	public static float Vector2Cross(Vector2 lVector2, Vector2 rVector2)
	{
		return 0f;
	}

	public static int SignVector2Cross(Vector2 lVector2, Vector2 rVector2)
	{
		return 0;
	}

	public static bool IsPointOnConvexPolygonBoundary(Vector2 point, List<Vector2> convexPolygon)
	{
		return false;
	}

	public static bool IsPointOnLine(Vector2 point, Vector2 startPoint, Vector2 endPoint)
	{
		return false;
	}

	public static bool IsPointInConvexPolygon(Vector2 point, List<Vector2> convexPolygon)
	{
		return false;
	}

	public static bool IsPointInTriangle(Vector2 point, List<Vector2> triangle)
	{
		return false;
	}

	public static void SortPointsByClockwise(ref List<Vector2> points, bool isLog = false)
	{
	}

	public static bool IsLineIntersection(Tuple<Vector2, Vector2> line1, Tuple<Vector2, Vector2> line2)
	{
		return false;
	}

	public static Vector2 CalculateStraightLineIntersectPoint(Tuple<Vector2, Vector2> line1, Tuple<Vector2, Vector2> line2)
	{
		return default;
	}

	public static Vector2 CalculateNearestConvexPolygonBoundaryPoint(Vector2 point, List<Vector2> convexPolygon, out int edgeIndex)
	{
		edgeIndex = default;
		return default;
	}

	public static List<T> Shuffle<T>(List<T> original)
	{
		return null;
	}

	public static void Shuffle<T>(ref List<T> original, int shuffleNum)
	{
	}

	public static Texture2D ScaleTexture(Texture2D source, float targetWidth, float targetHeight)
	{
		return null;
	}

	public static Texture2D Resize(Texture2D texture2D, int targetX, int targetY)
	{
		return null;
	}

	public static int DateDiff(string dateStartShortTime, string dateEndShortTime)
	{
		return 0;
	}

	public static double DateDiffDaysOneDecimal(string dateStartShortTime, string dateEndShortTime)
	{
		return 0.0;
	}

	public static string GetHMSTime(float time)
	{
		return null;
	}

	public static string GetMonthName(string m_month)
	{
		return null;
	}

	public static void Sequence<T>(List<T> items, Contrast<T> contrast)
	{
	}

	public static bool IsInSameWeek(DateTime dtmS, DateTime dtmE)
	{
		return false;
	}

	public static byte[] DecryptString(byte[] contentBytes)
	{
		return null;
	}

	public static byte[] Encrypt(byte[] toEncryptArray)
	{
		return null;
	}

	public static void TransformDictionResToRes1()
	{
	}

	private static void StartEncryptWithPath(string path)
	{
	}

	public static List<string> GetAllFilesAndDirectory(string _path)
	{
		return null;
	}

	public static List<string> GetAllFiles(string _path)
	{
		return null;
	}

	public static void TransformStreamingAssetsRes1ToCache()
	{
	}

	private static void CopyFileAndDir(string dir, string desDir)
	{
	}
}
