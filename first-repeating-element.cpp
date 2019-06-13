#include <iostream>
#include <map>
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
	    map <int,int> m;
	    for(int i = 0;i<n;i++)
	    {
	        cin >> ar[i];
	        m[ar[i]]++;
	    }
	    bool f = 0;
	    for(int i = 0;i<n;i++)
	    {
	        if(m[ar[i]] > 1)
	        {
	            f = 1;
	            cout << i+1 << endl;
	            break;
	        }
	    }
	    if(!f) cout << -1 << endl;
	}
	return 0;
}