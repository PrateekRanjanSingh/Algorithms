#include <iostream>
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
	    int res = 0;
	    for(int i = 0;i<n;i++)
	    {
	        res ^= ar[i];
	    }
	    cout << res << endl;
	}
	return 0;
}