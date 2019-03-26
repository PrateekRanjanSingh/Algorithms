#include <iostream>
using namespace std;

int m,n;
int func(int a,int b)
{
    if(a==m-1||b==n-1) return 1;
    if(a==m-1&&b==n-1) return 1;
    return(func(a+1,b) + func(a,b+1));
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    cin >> m >> n;
	    cout << func(0,0) << endl;
	}
	return 0;
}