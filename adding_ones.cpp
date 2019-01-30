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
	    int ar[n] = {0};
	    int k;
	    cin >> k;
	    for(int i = 0;i<k;i++)
	    {
	        int x;
	        cin >> x;
	        for(int j = x-1;j<n;j++)
	        {
	            ar[j]++;
	        }
	    }
	    for(int i = 0;i<n;i++)
	    {
	        cout << ar[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}