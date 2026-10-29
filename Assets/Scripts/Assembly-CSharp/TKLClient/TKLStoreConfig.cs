using System.Collections.Generic;

namespace TKLClient
{
	public class TKLStoreConfig
	{
		public class StoreGoods
		{
			public int default_price;
		}

		public int video_exchange_hearts_price;

		public List<StoreGoods> goods_config;
	}
}
