#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    int r = n%m;
	    int closest;
	    if(n > 0)
	    {
	        if(m < 0) m*= -1;
	        if(r > m-r)
    	    {
    	        closest = n + m - r;
    	    }
    	    else if(r==m-r)
    	    {
    	        closest = n + r;
    	    }
    	    else
    	    {
    	        closest = n - r;
    	    }
	    }
	    else
	    {
	        r*=-1;
	        if(r > m-r)
    	    {
    	        closest = n -( m - r);
    	    }
    	    else if(r==m-r)
    	    {
    	        closest = n - r;
    	    }
    	    else
    	    {
    	        closest = n + r;
    	    }
	    }
	    cout << closest << endl;
	}
	return 0;
}