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
	    int prod = 1;
	    for(int i = 0;i<n;i++)
	    {
	        prod *= ar[i];
	    }
	    for(int i = 0;i<n;i++)
	    {
	        cout << prod/ar[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}