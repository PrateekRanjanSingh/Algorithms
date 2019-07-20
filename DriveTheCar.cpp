#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    int ar[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> ar[i];
	    }
	    int c = 0;
	    for(int i = 0;i<n;i++)
	    {
	        if(ar[i] > k) 
	        {
	            c+=ar[i]-k;
	            k += ar[i]-k;
	        }
	    }
	    if(c==0) cout << -1;
	    else cout << c;
	    cout << endl;
	}
	return 0;
}