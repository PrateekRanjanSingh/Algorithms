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
	        cin >>ar[i];
	    }
	    sort(ar,ar+n);
	    int c = 0,a=0,b=0,x=0,y=0;
	    for(int i = n-1;i>=0;i--)
	    {
	        if(i%2!=0)
	        {
	            a+=ar[i] * pow(10,x++);
	        }
	        else
	        {
	            b+=ar[i] * pow(10,y++);
	        }
	    }
	    cout << a+b << endl;
	}
	return 0;
}