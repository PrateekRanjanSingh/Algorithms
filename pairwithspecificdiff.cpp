#include <iostream>
using namespace std;

int maxsum(int ar[], int n, int k)
{
    int temp[1000] = {0};
    for(int i = 0;i<n;i++) temp[ar[i]]++;
    int sum = 0;
    // for(int i = 0;i<1000;i++)
    // {
    //     if(temp[i]==1)
    //     {
    //         cout << i << " ";
    //         for(int j = k+i-1;j>i;j--)
    //         {
    //             if(temp[j]==1)
    //             {
    //                 cout << j << " ";
    //                 sum += i+j;
    //                 temp[j] = 0;
    //                 break;
    //             }
    //         }
    //     }
    // }
    for(int i = 999;i>=0;i--)
    {
        int mx = -1;
        if(temp[i]==1)
        {
            for(int j = i-k+1;j<i;j++)
            {
                if(temp[j]==1)
                {
                    if(mx < j) mx = j;
                }
            }
            if(mx!=-1)
            sum += i + mx;
            temp[mx] = 0;
        }
    }
    return sum;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int ar[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> ar[i];
	    }
	    int k;
	    cin >> k;
	    cout << maxsum(ar,n,k) << endl;
	}
	return 0;
}