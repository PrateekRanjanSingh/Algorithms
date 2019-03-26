import java.util.*;

class maps{
	Scanner s = new Scanner(System.in);
	HashMap <String,List> h1 = new HashMap<>();
	HashMap <String,Integer> h2 = new HashMap<>();
	public void add()
	{
		System.out.println("Enter n");
		int n  = s.nextInt();
		s.nextLine();
		for(int i = 0;i<n;i++)
		{
			List l = new ArrayList();
			System.out.println("Enter student name");
			String st = s.nextLine();
			s.nextLine();
			System.out.println("Enter number of courses");
			int k = s.nextInt();
			s.nextLine();
			for(int j = 0;j<k;j++)
			{
				System.out.println("Enter courses name");
				String st2 = s.nextLine();
				l.add(st2);
			}
			h1.put(st, l);
		}
	}
	public void addcourse()
	{
		//Hash Map for names of faculty handling the course
		System.out.println("Enter m");
		int m = s.nextInt();
		s.nextLine();
		for(int i = 0;i<m;i++)
		{
			System.out.println("Enter course");
			String course = s.nextLine();
			s.nextLine();
			System.out.println("Enter faculty");
			int fac = s.nextInt();
			s.nextLine();
			h2.put(course, fac);
		}
	}
	public void remove(String stud)
	{
		if(h1.containsKey(stud))
		h1.remove(stud);
	}
	public void search(String stud)
	{
		System.out.println("Following are the faculties for " + stud);
		List <String>l = h1.get(stud);
		for(String x: l)
		{
			System.out.print(h2.get(x)+ " ");
		}
		System.out.println();
	}
	public void show()
	{
		//System.out.print(Arrays.asList(h1));
		System.out.println("Printing h1");
		for(String str: h1.keySet())
		{
			System.out.println(str + " " + h1.get(str));
		}
		System.out.println();
		System.out.println("Printing h2");
		for(String str: h2.keySet())
		{
			System.out.println(str + " " + h2.get(str));
		}
	}
}

public class mappings {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		maps prateek = new maps();
		//Adding students and courses
		prateek.add();
		//Adding courses
		prateek.addcourse();
		prateek.show();
		System.out.println("Enter name to remove");
		String name = s.nextLine();
		prateek.remove(name);
		System.out.println("Enter name of student for searching faculties");
		String studname = s.nextLine();
		prateek.search(studname);
		//Showing the maps
		prateek.show();
	}

}
