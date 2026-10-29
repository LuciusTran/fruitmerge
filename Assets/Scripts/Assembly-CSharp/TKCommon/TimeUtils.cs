using System;

namespace TKCommon
{
	public class TimeUtils
	{
		private static readonly DateTime DateTime_1970_01_01_08_00_00;

		private static readonly DateTime standardDateTime;

		public const uint OnDaySecond = 86400u;

		public const uint OnHourSecond = 3600u;

		private static uint DAY_PER_YEAR;

		private static uint DAY_PER_MONTH;

		private static uint DAY_PER_WEEK;

		public static long GetTimeStamp()
		{
			return 0L;
		}

		public static long GetSecondsStamp()
		{
			return 0L;
		}

		public static string GetCurTime()
		{
			return null;
		}

		public static string GetCurDate()
		{
			return null;
		}

		public static string GetTimeArea(long deltaTime, int timeInterval = 30)
		{
			return null;
		}

		public static DateTime ConvertIntDateTime(double d)
		{
			return default;
		}

		public static long GetTimeSinceStartup()
		{
			return 0L;
		}

		public static long getCurrentMillSecond()
		{
			return 0L;
		}

		public static long GetUnixTime(DateTime nowTime)
		{
			return 0L;
		}

		public static string GetMMDDDate(long time)
		{
			return null;
		}

		public static string GetMMDDHMSDate(long time)
		{
			return null;
		}

		public static string FormatSecondMMSS(int second)
		{
			return null;
		}

		public static string FormatSecondHHMMSS(long second)
		{
			return null;
		}

		public static double GetTotalMillisecondsSince1970()
		{
			return 0.0;
		}

		public static double GetTotalSecondsSince1970()
		{
			return 0.0;
		}

		public static TimeSpan GetTimeSpanSince1970()
		{
			return default;
		}

		public static string FormatShowTime(ulong timeInSec)
		{
			return null;
		}

		public static string GetTimeString(string format, long seconds)
		{
			return null;
		}

		public static string GetTimeStringV2(string format, long seconds)
		{
			return null;
		}

		public static DateTime GetLocalTime(uint timeStamp)
		{
			return default;
		}

		public static string DateStringFromNow(DateTime dt)
		{
			return null;
		}

		public static double GetMillisecondsFromTicks(long ticks)
		{
			return 0.0;
		}

		public static double GetSecondsFromTicks(long ticks)
		{
			return 0.0;
		}
	}
}
