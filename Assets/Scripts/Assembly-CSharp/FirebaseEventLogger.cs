using System.Collections.Generic;

public class FirebaseEventLogger : IEventLogger
{
	public void LogEvent(string eventName, string key, string value)
	{
	}

	public void LogEvent(string eventName, Dictionary<string, string> dict)
	{
	}

	public void calEvent(string eventName, string key, string value, int number)
	{
	}

	public void calEvent(string eventName, Dictionary<string, string> dict, int number)
	{
	}

	public void SetUserLevel(int level)
	{
	}

	public void OnStartGameLevel(string level)
	{
	}

	public void OnFinishGameLevel(string level)
	{
	}

	public void OnFailGameLevel(string level)
	{
	}

	public void OnGameBuy(string item, int number, double price)
	{
	}

	public void OnGameUse(string item, int number, double price)
	{
	}

	public void OnGamePay(double money, double coin, int source)
	{
	}

	public void OnGameBonus(double price, int trigger, int num = 0, string item = null)
	{
	}
}
