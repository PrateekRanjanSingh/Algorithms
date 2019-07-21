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
	    int max_till_now  = ar[0];
	    int curr_max = ar[0];
	    for(int i = 1;i<n;i++)
	    {
	        curr_max = max(ar[i],curr_max+ar[i]);
	        max_till_now = max(max_till_now,curr_max);
	    }
	    cout << max_till_now << endl;
	}
	return 0;
}