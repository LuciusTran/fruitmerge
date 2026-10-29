using System.Collections.Generic;

public class LocalizationManager : Singleton<LocalizationManager>
{
	private enum CustomLanguage
	{
		None = 0,
		Japanese = 1,
		Russian = 2,
		German = 3,
		French = 4,
		Spanish = 5,
		Chinese = 6,
		ChineseSimplified = 7,
		ChineseTraditional = 8,
		Korean = 9,
		Italian = 10,
		Turkish = 11,
		Indonesian = 12,
		Thai = 13,
		Polish = 14,
		Malay = 15,
		Vietnamese = 16,
		Danish = 17,
		Swedish = 18,
		Finnish = 19,
		Dutch = 20,
		Portuguese = 21
	}

	private readonly Dictionary<string, string> languageCodeDic;

	private static readonly Dictionary<string, string> ChineseDictionary;

	private static readonly Dictionary<string, string> ChineseTraditionalDictionary;

	private static readonly Dictionary<string, string> DanishDictionary;

	private static readonly Dictionary<string, string> DutchDictionary;

	private static readonly Dictionary<string, string> FinnishDictionary;

	private static readonly Dictionary<string, string> FrenchDictionary;

	private static readonly Dictionary<string, string> GermanDictionary;

	private static readonly Dictionary<string, string> IndonesianDictionary;

	private static readonly Dictionary<string, string> ItalianDictionary;

	private static readonly Dictionary<string, string> JapaneseDictionary;

	private static readonly Dictionary<string, string> KoreanDictionary;

	private static readonly Dictionary<string, string> MalayDictionary;

	private static readonly Dictionary<string, string> PolishDictionary;

	private static readonly Dictionary<string, string> PortugueseDictionary;

	private static readonly Dictionary<string, string> RussianDictionary;

	private static readonly Dictionary<string, string> SpanishDictionary;

	private static readonly Dictionary<string, string> SwedishDictionary;

	private static readonly Dictionary<string, string> ThaiDictionary;

	private static readonly Dictionary<string, string> TurkishDictionary;

	private static readonly Dictionary<string, string> VietnameseDictionary;

	private CustomLanguage customLanguage;

	private string localLanguageCode;

	public string GetLocalLanguageCode()
	{
		return null;
	}

	public override void Awake()
	{
	}

	public bool IsStringContains(string text)
	{
		return false;
	}

	public string LoadLocalizedText(string key)
	{
		return null;
	}
}
