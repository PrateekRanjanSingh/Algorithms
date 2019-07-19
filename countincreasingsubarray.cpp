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
	    int cnt = 0;
	    for(int i = 0;i<n;i++)
	    {
	        for(int j = i+1;j<n;j++)
	        {
	            if(ar[j]>ar[j-1]) cnt++;
	            else break;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}