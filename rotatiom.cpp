#include <iostream>
using namespace std;
int main()
{
    int n,d,a;
    cin >> n >> d;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int j=0;j<d;j++)
    {
    	 for(int i=0;i<n-1;i++)
    	{
        	arr1[i] = arr[i+1];
    	}
    	arr1[n-1]=arr[0];
		for(int i=0;i<n;i++)
		{
			int temp;
			temp = arr1[i];
			arr[i] = temp;
		}  
    }
	
    for(int i=0 ;i<n ;i++)
	{
	    cout << arr[i] << " ";
	}
    return 0;
}
