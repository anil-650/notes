# 10/01/2022
## Thread priority in JAVA

- Is a number assigned to a thread. This is used by `thread selector` that which Thread should be executed.
- In JAVA each thread is assigned a priority , so which order (preference) it will be scheduled for running.
- Thread priority goes from 1-10 relatively, **DEFAULT = 5**
- JAVA has `THREAD CLASS` for it.

```java
MIN_PRIORITY=1
NORM_PRIORITY=5
MAX_PRIORITY=10
```

- Thread of same priority are given the equal time by JAVA scheduler.
- Thread execution happens on *FCFS(First Come First Serve)* basis ; selected and executed by JVM.
- `getPriority()` gives you the Thread priority.

example:

```java
public class A implements Runnable
{
    public void run()
    {
        System.out.println(Thread.currentThred()); //This method is static
    }

    public static viod main(String[] args)
    {
        A a =new A();
        Thread t = new Thread(a "NewThread");
        System.out.println("Priority of Thread:"+getPriority());
        System.out.println("Name of Thread:"+getName());        
        t.start();
    }
}
```

```sh
Output:
    Priority of Thread: 5
    Name of Thread: New Thread
    Thread[NewThread,5,main]
```
