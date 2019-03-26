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
	    int k;
	    cin >> k;
	    for(int i = 0;i<n-k+1;i++)
	    {
	        int f = 0;
	        for(int j = i;j<i+k;j++)
	        {
	            if(ar[j] < 0)
	            {
	                cout << ar[j] << " ";
	                f = 0;
	                break;
	            }
	            else
	            {
	                f=1;
	            }
	        }
	        if(f==1) cout << 0 << " ";
	    }
	    cout << endl;
	}
	return 0;
}