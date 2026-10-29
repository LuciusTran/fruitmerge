using System;
using System.Collections.Generic;
using System.Threading;

public class ThreadRuner : IThread
{
	private readonly List<ThreadTask> taskRunner;

	private readonly ReaderWriterLockSlim taskRunnerLocker;

	public ITask Task(Action task)
	{
		return null;
	}

	public ITask Task(Func<object> task)
	{
		return null;
	}

	public ITaskHandler AddTask(ThreadTask task)
	{
		return null;
	}

	public void Cancel(ThreadTask task)
	{
	}

	public void Update()
	{
	}

	private void ThreadExecuter(object state)
	{
	}

	private void RunTaskThread(ThreadTask task)
	{
	}
}
