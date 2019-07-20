#include <bits/stdc++.h>
using namespace std;

int cal(int ar[],int n)
{
    int dp[n];
    dp[0] = ar[0];
    dp[1] = max(ar[0],ar[1]);
    int t1,t2;
    for(int i = 2;i<n;i++)
    {
        t1 = ar[i] + dp[i-2];
        t2 = dp[i-1];
        dp[i] = max(t1,t2);
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
	    
	    cout << cal(ar,n) << endl;
	}
	return 0;
}