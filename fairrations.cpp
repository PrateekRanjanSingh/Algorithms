#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
/*
4 5 7 9
3 5 6 8
2 4 6 6 6
*/
// Complete the fairRations function below.
int fairRations(vector<int> B) 
{
    int n = B.size(), count = 0;
    int flag = 1;
    for(int i = 0;i<n-1;i++)
    {
        if(B[i]%2!=0)
        {
            B[i]++;
            B[i+1]++;
            count += 2;
        }
        if(i+1==n-1)
        {
            if(B[i+1]%2!=0)
            {
                flag = 0;
            }
        }
    }
    if(flag==0) return -1;
    else
    {
        return count;
    }
}

int main()
{
    int n;
    cin >> n;
    vector <int> B;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }
    int r = fairRations(B);
    if(r==-1) cout << "NO";
    else cout << r;
    return 0;
}