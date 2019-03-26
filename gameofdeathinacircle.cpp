#include <bits/stdc++.h>
using namespace std;

int func(int n,int k)
{
    if(n==0) return 1;
    return (func(n-1,k) + k-1)%n + 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        cout << func(n,k) << endl;
    }
}