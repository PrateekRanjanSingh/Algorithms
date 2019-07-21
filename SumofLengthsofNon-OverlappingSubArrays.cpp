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
	    int l = 0,sum = 0;
	    bool f = false;
	    for(int i = 0;i<n;i++)
	    {
	        if(ar[i]==k) f = true;
	        if(ar[i]<=k)l++;
	        else
	        {
	            if(f)
	            {
	                sum += l;
	                f = false;
	            }
	            l = 0;
	        }
	    }
	    if(f) sum+=l;
	    cout << sum << endl;
	}
	return 0;
}