#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the workbook function below.
int workbook(int n, int k, vector<int> a) 
{
    int count = 0, pn =1;
    for(int i = 0;i<n;i++)
    {
        int t = a[i],p = 0;
        //cout << t/k << " ";
        int m = t/k;
        if(t%k>0) m++;
        for(int j = pn;j <= pn + m;j++)
        {
            if(t/k>0)
            for(int x = 1;x<=k;x++)
            {
                p++;
                if(p>t) break;
                if(p==j) count++;
            }
            else
            for(int x = 1;x<=t;x++)
            {
                p++;
                if(p>t) break;
                if(p==j) count++;
            }
        }
       // cout << pn << " ";
        if(a[i]%k>0)
        {
            pn += a[i]/k + 1;
        }
        else
        {
            pn += a[i]/k;
        }
        //cout << pn << endl;
    }
    return count;
}

int main()
{
    int n,k;
    cin >> n >> k;
    vector <int> v;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << workbook(n,k,v);
    return 0;
}
