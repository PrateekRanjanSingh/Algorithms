import java.io.*;
import java.util.Scanner;
import java.util.NoSuchElementException;
class as6 {
	public static void main (String[] args) {
	    Scanner s = new Scanner(System.in);
		String reg = s.nextLine();
		String mob_no = s.nextLine();
		String nos = "0123456789";
		String alpnum = "0123456789abcdefghijklmnopqrstuvwxyz";
		try {
		    if(mob_no.length()!=10 || reg.length()!=9) throw new IllegalArgumentException("Illegal arguments");
		    for(int i = 0;i<mob_no.length();i++)
		    {
		        if(nos.indexOf(mob_no.charAt(i))==-1)
		        {
		            throw new NumberFormatException("Wrong format of numbers");
		        }
		    }
		    for(int i = 0;i<reg.length();i++)
		    {
		        if(alpnum.indexOf(reg.charAt(i))==-1)
		        {
		            throw new NoSuchElementException("No such element exists");
		            
		        }
		    }
		    System.out.println("Valid");
		}
		catch(NumberFormatException e) 
		{
		    System.out.println("Invalid");
		    System.out.println(e.getMessage());
		} 
		catch(IllegalArgumentException e) {
		    System.out.println("Invalid");
		    System.out.println(e.getMessage());
		}
		catch(NoSuchElementException e) {
		    System.out.println("Invalid");
		    System.out.println(e.getMessage());
		}
	}
}