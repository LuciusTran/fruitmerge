using System;

public class ThreadTask : ITask, ITaskHandler
{
	private readonly ThreadRuner runner;

	public Func<object> TaskWithResult { get; set; }

	public Action Task { get; set; }

	public Action<object> CompleteWithResult { get; private set; }

	public Action Complete { get; private set; }

	public Action<Exception> Error { get; private set; }

	public bool ReturnResult { get; set; }

	public float DelayTime { get; private set; }

	public float StartTime { get; set; }

	public ThreadTask(ThreadRuner runner)
	{
	}

	public ITask OnComplete(Action onComplete)
	{
		return null;
	}

	public ITask OnComplete(Action<object> onComplete)
	{
		return null;
	}

	public ITask Delay(float time)
	{
		return null;
	}

	public ITask OnError(Action<Exception> onError)
	{
		return null;
	}

	public void Cancel()
	{
	}

	public ITaskHandler Start()
	{
		return null;
	}
}
