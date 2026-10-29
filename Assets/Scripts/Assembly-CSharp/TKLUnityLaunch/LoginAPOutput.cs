using OPS.Obfuscator.Attribute;
using TKLClient;

namespace TKLUnityLaunch
{
	[DoNotObfuscateClass]
	public class LoginAPOutput
	{
		public TKLUser user;

		public TKLRemoteConfig remote_config;

		public long utc_time;
	}
}
