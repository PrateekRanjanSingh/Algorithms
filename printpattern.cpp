#include <iostream>
using namespace std;

void func(int n, int t,int f)
{
    cout << n << " ";
    if(f==1 && n==t) return;
    else if(n<=0 || f==1)
    {
        func(n+5,t,1);
        if(n==t) return;
    }
    else
    {
        func(n-5,t,0);
    }
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    func(n,n,0);
	    cout << endl;
	}
	return 0;
}