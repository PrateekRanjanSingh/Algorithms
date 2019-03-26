#include <bits/stdc++.h>
using namespace std;

int main() {
    //code
    long t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        long a[n],b[n];
        long max = INT_MIN;
        for(long i = 0;i<n;i++)
        {
            cin >> a[i];
            if(max<a[i]) max = a[i];
        }
        for(long i=0;i<n;i++)
        {
            cin >> b[i];
        }
        int temp[max+1] = {0};
        for(int i=0;i<n;i++)
        {
            temp[b[i]]++;
        }
        int sum = 0;
        for(int i = 0;i<=max;i++)
        {
            sum+=temp[i];
            temp[i] = sum;
        }
        long q;
        cin >> q;
        for(long i = 0;i<q;i++)
        {
            long qr;
            cin >> qr;
            cout << temp[a[qr]] << endl;
        }
    }
    return 0;
}