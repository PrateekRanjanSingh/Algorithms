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
	    int a[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int c = 0;
	    for(int i = 0;i<n-1;i++)
	    {
	        for(int j = i;j<n;j++)
	        {
	            if(a[j]%a[i]==k) c++;
	            if(a[i]%a[j]==k) c++;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}