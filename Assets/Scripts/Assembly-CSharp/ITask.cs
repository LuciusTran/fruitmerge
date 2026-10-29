using System;

public interface ITask
{
	ITask Delay(float time);

	ITask OnComplete(Action onComplete);

	ITask OnComplete(Action<object> onComplete);

	ITask OnError(Action<Exception> onError);

	ITaskHandler Start();
}
