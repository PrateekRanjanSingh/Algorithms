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
	    map <int,int> arr;
	    int a = 0, b = 1,c;
	    arr[0] = 1;
	    arr[1] = 1;
	    for(int i = 2;i<17;i++)
	    {
	        arr[a+b] = 1;
	        c = a+b;
	        a = b;
	        b = c;
	    }
	    for(int i = 0; i < n;i++)
	    {
	        int x;
	        cin >> x;
	        if(arr[x]==1) cout << x << " ";
	    }
	    cout << endl;
	}
	return 0;
}