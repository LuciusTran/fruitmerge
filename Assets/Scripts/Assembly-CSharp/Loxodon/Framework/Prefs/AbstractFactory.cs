namespace Loxodon.Framework.Prefs
{
	public abstract class AbstractFactory : IFactory
	{
		private IEncryptor encryptor;

		private ISerializer serializer;

		public IEncryptor Encryptor
		{
			get
			{
				return null;
			}
			protected set
			{
			}
		}

		public ISerializer Serializer
		{
			get
			{
				return null;
			}
			protected set
			{
			}
		}

		public AbstractFactory()
		{
		}

		public AbstractFactory(ISerializer serializer)
		{
		}

		public AbstractFactory(ISerializer serializer, IEncryptor encryptor)
		{
		}

		public abstract Preferences Create(string name);
	}
}
