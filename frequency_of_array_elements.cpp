#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int ar[n];
	    int max  = INT_MIN;
	    for(int i = 0;i<n;i++)
	    {
	        cin >> ar[i];
	        if(ar[i] > max) max = ar[i];
	    }
	    int t[n+1] = {0};
	    for(int i = 0;i<n;i++)
	    {
	        t[ar[i]]++;
	    }
	    for(int i = 1;i<=n;i++)
	    {
	        cout << t[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}