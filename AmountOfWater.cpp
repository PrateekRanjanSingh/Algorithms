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
    	for(int i = 0;i<n;i++)
    	{
    	    cin >> ar[i];
    	}
    	int l[n],r[n];
    	l[0] = ar[0];
    	for(int i = 1;i<n;i++)
    	{
    	    l[i] = max(l[i-1],ar[i]);
    	}
    	r[n-1] = ar[n-1];
    	for(int i = n-2;i>=0;i--)
    	{
    	    r[i] = max(r[i+1],ar[i]);
    	}
    	int water  = 0;
    	for(int i = 0;i<n;i++)
    	{
    	    water  += min(l[i],r[i]) - ar[i];
    	}
    	cout << water << endl;
	}
	return 0;
}