/*
Finding postion by recursion
*/
#include <bits/stdc++.h>
using namespace std;

int func(int ar[],int n)
{
    if(n==1) return ar[0];
    int j = 0,c=0;
    for(int i = 0;i<n;i++)
    {
        if((i+1)%2==0) c++;
    }
    int t[c];
    for(int i = 0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            t[j++] = ar[i];
        }
    }
    int value = func(t,c);
    return value;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0;i<n;i++)
        {
            ar[i] = i+1;
        }
        cout << func(ar,n) << endl;
    }
}