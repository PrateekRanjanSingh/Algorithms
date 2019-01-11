#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a,b;
    cin >> t;
    while(t--)
    {
        cin >> n >> a >> b;
        n--;
        int d = abs(a-b);
        int m = min(a,b);
        int ma = max(a,b);
        if(a==b) cout << m*n;
        else
        for(int i = m*n;i<=ma*n;i+=d)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

