#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long int n,b;
	    cin >> n >> b;
	    long int ar[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> ar[i];
	        if(ar[i]==b)
	        {
	            b *= 2;
	        }
	    }
	    cout << b << endl;
	}
	return 0;
}