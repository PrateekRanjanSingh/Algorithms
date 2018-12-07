/*
Program to find maximum of elements in a subarray containing both positive and negative integers
*/

#include <bits/stdc++.h>
using namespace std;

void print(vector<int>v)
{
    for(int i =0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int subar(int a[], int n)
{
    vector <int> v;
    int max;
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            int sum = 0;
            for(int k = i;k<=j;k++)
            {
                sum += a[k];
            }
            max = sum;
            if(max < sum) max = sum;
            v.push_back(sum);
        }
    }
    int max = v[0];
    for(int i = 1;i<v.size();i++)
    {
        if(max<v[i]) max = v[i];
    }
   // print(v);
    return max;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i =0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    cout << subar(a,n) << endl;
	}
	return 0;
}
