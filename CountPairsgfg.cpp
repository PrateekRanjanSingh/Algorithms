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
	    int arr[n],a[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    for(int i =  0;i<n;i++) a[i] = i*arr[i];
	    int count = 0;
	    for(int i = 0;i<n-1;i++)
	    for(int j = i;j<n;j++)
	    {
	        if(a[j] < a[i]) count++;
	    }
	    cout << count << endl;
	}
	return 0;
}