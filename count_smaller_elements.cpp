#include <bits/stdc++.h>
using namespace std;

void show(vector <int> v)
{
    for(int i = 0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << 0;
}

vector <int> func(int ar[],int n)
{
    vector <int> v;
    int i = 0,j=n-1,count=0;
    while(i<n-1)
    {
        if(j==i)
        {
            j = n-1;
            i++;
            v.push_back(count);
            count = 0;
        }
        if(ar[j] < ar[i])
        {
            count++;
        }
        j--;
    }
    return v;
}

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
	    show(func(ar,n));
	    cout << endl;
	}
	return 0;
}