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
	    sort(ar,ar+n);
	    for(int i = 0;i<n;i++)
	    {
	        int t = ar[i];
	        int l = 0;
	        if(ar[i]==0) continue;
	        for(int j = i+1;j<n;j++)
	        {
	            ar[j]-=t;
	            if(ar[j]>0) l++;
	        }
	        if(l>0)
	        cout << l << " ";
	    }
	    cout << endl;
	}
	return 0;
}