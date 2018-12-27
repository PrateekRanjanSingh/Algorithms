#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the beautifulTriplets function below.
int beautifulTriplets(int d, vector<int> v) 
{
    int n  = v.size();
    int a[n] = {0};
    for(int i = 0;i<v.size();i++)
    {
        a[v[i]]++;
    }
    int count = 0;
    // for(int i = 0;i<(v.size()-2*d);i++)
    // {
    //     if(a[i]>0)
    //     if(a[i+d]>0)
    //     if(a[i+2*d]>0) count++;
    // }
    for(int i = 0;i<v.size();i++) cout << a[i] << " ";
    return count;
}

int main ()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    vector <int> v;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    //cout << beautifulTriplets(d,v);
    int a[300000] = {0};
    for(int i = 0;i<v.size();i++)
    {
        a[v[i]]++;
    }
    int count = 0;
    for(int i = 0;i<(n);i++)
    {
        if(a[i]>0 && a[i+d]>0 && a[i+2*d]>0)
        {
            int m = max(a[i],a[i+d]);
            count += max(m,a[i+2*d]);
        }
    }
    cout << count;
    return 0;
}