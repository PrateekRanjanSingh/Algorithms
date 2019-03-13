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
	    int ar[n],temp[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> ar[i];
	    }
	    for(int i = 0;i<n;i++)
	    {
	        temp[ar[i]-1] = i+1;
	    }
	    for(int i = 0;i<n;i++)
	    {
	        cout << temp[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}