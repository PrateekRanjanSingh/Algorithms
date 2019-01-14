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
	    int a[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int ar[2] = {1,0};
	    int sum = 0;
	    for(int i = 0;i<n;i++)
	    {
	        sum = ( (sum + a[i]) % 2 + 2) % 2; 
            ar[sum]++; 
	    }
	    cout << ar[0]*(ar[0]-1)/2 + ar[1]*(ar[1]-1)/2 << endl;
	}
	return 0;
}