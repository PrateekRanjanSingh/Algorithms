/**
Code for finding recursive sequence
**/

#include <iostream>
using namespace std;

long func(long t,long n, int index)
{
    long prod = 1;
    for(int i = 0;i<index;i++)
    {
        prod*=t++;
    }
    if(index==n) return prod;
    long v = prod + func(t,n,index+1);
    return v;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long n;
	    cin >> n;
	    cout << func(1,n,1) << endl;
	}
	return 0;
}