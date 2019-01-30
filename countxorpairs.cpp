#include <bits/stdc++.h>
using namespace std;

int func(int ar[],int n)
{
    map<int,int>m;
    for(int i = 0;i<n;i++)
    {
        m[ar[i]]++;
    }
    int count = 0;
    for(auto it : m)
    {
        if(it.second > 1)
        {
            count += it.second*(it.second-1)/2;
        }
    }
    return count;
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
	    cout << func(ar,n) << endl;
	}
	return 0;
}