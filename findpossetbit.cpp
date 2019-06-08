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
	    int j = 0;
	    int count = 0,pos = 1;
	    int t = n;
	    while(n > 0)
	    {
	        if(n & 1)
	        {
	            break;
	        }
	        pos++;
	        n = n >> 1;
	    }
	    while(t > 0)
	    {
	        if(t & 1) count++;
	        t = t >> 1;
	    }
	    if(count == 1)
	    {
	        cout << pos << endl;
	    }
	    else
	    {
	        cout << -1 << endl;
	    }
	}
	return 0;
}