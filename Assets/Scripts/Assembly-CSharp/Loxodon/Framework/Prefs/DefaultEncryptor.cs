using System.Security.Cryptography;

namespace Loxodon.Framework.Prefs
{
	public class DefaultEncryptor : IEncryptor
	{
		private const int IV_SIZE = 16;

		private static readonly byte[] DEFAULT_IV;

		private static readonly byte[] DEFAULT_KEY;

		private RijndaelManaged cipher;

		private byte[] iv;

		private byte[] key;

		static DefaultEncryptor()
		{
		}

		public DefaultEncryptor()
		{
		}

		public DefaultEncryptor(byte[] key, byte[] iv)
		{
		}

		protected bool CheckKey(byte[] bytes)
		{
			return false;
		}

		protected bool CheckIV(byte[] bytes)
		{
			return false;
		}

		public byte[] Encode(byte[] plainData)
		{
			return null;
		}

		public byte[] Decode(byte[] cipherData)
		{
			return null;
		}
	}
}
