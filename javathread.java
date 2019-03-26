import java.util.*;
class Counter
{
	public int countA,countB,countC;
	public synchronized void increment(int val)
	{
		if(val==1) countA++;
		else if(val==2) countB++;
		else if(val==3) countC++;
	}
}
class as7
{
	public static void main(String []args) throws Exception
	{
		Random rand = new Random();
		int ar[] = new int[240];
		for(int i = 0;i<240;i++)
		{
			int n = rand.nextInt(3);
			n++;
			ar[i] = n;
		}
		Counter c = new Counter();
		Thread t1 = new Thread(()->{
			
			for(int i = 0;i<60;i++)
			{
					c.increment(ar[i]);
			}
		});
		Thread t2 = new Thread(()->{
			
			for(int i = 60;i<120;i++)
			{
					c.increment(ar[i]);
			}
		});
		Thread t3 = new Thread(()->{
			
			for(int i = 120;i<180;i++)
			{
					c.increment(ar[i]);
			}
		});
		Thread t4 = new Thread(()->{
			for(int i = 180;i<240;i++)
			{
					c.increment(ar[i]);
			}
		});
		t1.start();
		t2.start();
		t3.start();
		t4.start();
		t1.join();
		t2.join();
		t3.join();
		t4.join();
		System.out.println("Count of A-> " + c.countA);
		System.out.println("Count of B-> " + c.countB);
		System.out.println("Count of C-> " + c.countC);
		int max;
		if(c.countA>c.countB) max = c.countA;
		else max = c.countB;
		if(max < c.countC) max = c.countC;
		if(max==c.countA)System.out.println("PR should be A with votes " + c.countA);
		else if (max==c.countB)System.out.println("PR should be B with votes " + c.countB);
		else if (max==c.countC)System.out.println("PR should be C with votes " + c.countC);
	}
}
