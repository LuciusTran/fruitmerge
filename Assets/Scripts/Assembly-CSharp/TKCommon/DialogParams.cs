using System;

namespace TKCommon
{
	public class DialogParams
	{
		public int Mode { get; set; }

		public string Title { get; set; }

		public int TitleFontSize { get; set; }

		public string Message { get; set; }

		public int MessageFontSize { get; set; }

		public bool PauseGame { get; set; }

		public string ConfirmBgColor { get; set; }

		public string ConfirmoutlineColor { get; set; }

		public string ConfirmText { get; set; }

		public Action<object> OnClickConfirm { get; set; }

		public string CancelText { get; set; }

		public Action<object> OnClickCancel { get; set; }

		public Action<object> OnClickClose { get; set; }

		public string OtherText { get; set; }

		public Action<object> OnClickOther { get; set; }

		public bool AutoClose { get; set; }

		public string UserData { get; set; }
	}
}
