#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    vector <int> w;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        w.push_back(x);
    }
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        vector <int> v;
        for(int i = a;i<=b;i++)
        {
            v.push_back(w[i]);
        }
        sort(v.begin(),v.end());
        cout << v[0] << endl;
    }
    return 0;
}