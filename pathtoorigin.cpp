#include <iostream>
using namespace std;

int path (int n, int m)
{
    if(n < 0 || m < 0) return 0;
    if(n==0 && m==0) return 1;
    int r;
    r = path(n-1,m) + path(n,m-1);
    return r;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    cout << path(n,m) << endl;
	}
	return 0;
}