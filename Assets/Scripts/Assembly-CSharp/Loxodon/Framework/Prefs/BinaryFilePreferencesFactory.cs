namespace Loxodon.Framework.Prefs
{
	public class BinaryFilePreferencesFactory : AbstractFactory
	{
		public BinaryFilePreferencesFactory()
		{
		}

		public BinaryFilePreferencesFactory(ISerializer serializer)
		{
		}

		public BinaryFilePreferencesFactory(ISerializer serializer, IEncryptor encryptor)
		{
		}

		public override Preferences Create(string name)
		{
			return null;
		}
	}
}
