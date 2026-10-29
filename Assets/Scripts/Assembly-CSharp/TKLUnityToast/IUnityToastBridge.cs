namespace TKLUnityToast
{
	public interface IUnityToastBridge
	{
		void ShowToast(string message, double duration, UnityToastPosition position);

		void ShowToastActivity(UnityToastPosition position);

		void HideToastActivity();
	}
}
