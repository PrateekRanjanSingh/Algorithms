/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    static int hammingDistance(int n1, int n2) 
    { 
        int x = n1 ^ n2; 
        int setBits = 0; 
      
        while (x > 0)  
        { 
            setBits += x & 1; 
            x >>= 1; 
        } 
      
        return setBits; 
    } 
	public static void main (String[] args) {
		//code
		Scanner s = new Scanner(System.in);
		int t;
		t = s.nextInt();
		while(t>0)
		{
		    t--;
		    int n = s.nextInt();
		    int ar[] = new int[n];
		    for(int i = 0;i<n;i++)
		    {
		        ar[i] = s.nextInt();
		    }
		    int count = 0;
		    for(int i = 0;i<n;i++)
		    {
		        for(int j = 0;j<n;j++)
		        {
		            count += hammingDistance(ar[i],ar[j]);
		        }
		    }
		    System.out.println(count);
		}
	}
}