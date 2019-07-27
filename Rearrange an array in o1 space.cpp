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
	    long int ar[n];
	    for(int i = 0;i<n;i++) cin >> ar[i];
	    for(int i = 0;i<n;i++) ar[i] += (ar[ar[i]]%n)*n;
	    for(int i = 0;i<n;i++) ar[i] = ar[i]/n;
	    for(int i = 0;i<n;i++) cout << ar[i] << " ";
	    cout << endl;
	}
	return 0;
}