#include <bits/stdc++.h>
using namespace std;

int func(int ar[],int n,int k)
{
    sort(ar,ar+n);
    int dp[n];
    dp[0] = 0;
    for(int i = 1;i<n;i++)
    {
        dp[i] = dp[i-1];
        if(ar[i]-ar[i-1]<k)
        {
            if(i >= 2)
            {
                dp[i] = max(dp[i],dp[i-2] + ar[i] + ar[i-1]);
            }
            else
            {
                dp[i] = max(dp[i],ar[i]+ar[i-1]);
            }   
        }
    }
    return dp[n-1];
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
	    cout << func(ar,n,k) << endl;
	}
	return 0;
}