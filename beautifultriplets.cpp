#include <bits/stdc++.h>

using namespace std;

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
    int a[100000] = {0};
    for(int i = 0;i<n;i++)
    {
        a[v[i]]++;
    }
    int count = 0;
    for(int i = 0;i<100000;i++)
    {
        if(a[i]>0 && a[i+d]>0 && a[i+2*d]>0)
        {
            //int m = max(a[i],a[i+d]);
            //count += max(m,a[i+2*d]);
            count += a[i];
        }
    }
    cout << count;
    return 0;
}

