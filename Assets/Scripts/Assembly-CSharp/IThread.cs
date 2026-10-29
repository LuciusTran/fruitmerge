using System;

public interface IThread
{
	ITask Task(Action task);

	ITask Task(Func<object> task);
}
