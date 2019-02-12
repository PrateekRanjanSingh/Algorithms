#include <iostream>
using namespace std;

int func(int n, int count)
{
    if(n==0) return count;
    count+=n%2;
    return func(n/2,count+1);
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << func(n,-1) << endl;
	}
	return 0;
}