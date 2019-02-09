#include <iostream>
using namespace std;
/*Implementing binary search*/

int search(int ar[],int k,int low,int high, int mid)
{
    if(k==ar[mid]) return mid;
    if(k<ar[mid])
    {
        int temp = mid;
        mid=(high+low)/2;
        search(ar,k,low,temp,mid);
    }
    else
    {
        int temp = mid;
        mid = (low+high)/2;
        search(ar,k,temp,high,mid);
    }
}

int main() {
	int n;
	cin >> n;
	int ar[n];
	for(int i = 0;i<n;i++)
	{
	    cin >>ar[i];
	}
	int k;
	cin >> k;
	cout << search(ar,k,0,n,n/2);
	return 0;
}