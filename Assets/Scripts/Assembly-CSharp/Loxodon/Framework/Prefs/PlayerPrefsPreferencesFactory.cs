namespace Loxodon.Framework.Prefs
{
	public class PlayerPrefsPreferencesFactory : AbstractFactory
	{
		public PlayerPrefsPreferencesFactory()
		{
		}

		public PlayerPrefsPreferencesFactory(ISerializer serializer)
		{
		}

		public PlayerPrefsPreferencesFactory(ISerializer serializer, IEncryptor encryptor)
		{
		}

		public override Preferences Create(string name)
		{
			return null;
		}
	}
}
