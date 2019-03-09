import java.util.*;
import java.lang.*;
class Fgg{
    public static void find(int arr[],int n){
        if(arr.length<=3)
        {
            Arrays.sort(arr);
            System.out.print(arr[n-1]);
            return;
        }
        else if(n==4){
        int re[]=new int[n];
        re[0]=arr[0];
        re[1]=arr[1];
        for(int i=2;i<n;i++)
        {
            int max=0;
            for(int j=1;j<i-1;j++)
            {
                if(max<re[j])
                max=re[j];
            }
            re[i]=arr[i]+max;
        }
        Arrays.sort(re);
        int a=re[n-1];
        re[0]=arr[0];
        re[1]=arr[1];
        re[n-1]=0;
        for(int i=2;i<n-1;i++)
        {
            int max=0;
            for(int j=0;j<i-1;j++)
            {
                if(max<re[j])
                max=re[j];
            }
            re[i]=arr[i]+max;
        }
        Arrays.sort(re);
        int b=re[n-1];
        if(a>b)
        System.out.print(a);
        else
        System.out.print(b);
        }
        else
        System.out.println(0);
    }
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            if(in.hasNextInt())
            arr[i]=in.nextInt();
        }
        //System.out.print(0);
        find(arr,n);
    }
}