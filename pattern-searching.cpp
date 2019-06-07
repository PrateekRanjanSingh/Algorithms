#include<bits/stdc++.h>
using namespace std;

bool find(string a, int n,string b, int m)
{
    for(int i = 0;i<=n-m;i++)
    {
        int temp = i;
        int c = 0;
        for(int j = 0;j<m;j++)
        {
            if(a[temp++]==b[j])
            {
                c++;
            }
        }
        if(c==m) return true;
    }
    return false;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string a,b;
	    cin >> a >> b;
	    if(find(a,a.length(),b,b.length())) cout << "found" << endl;
	    else cout << "not found" << endl;
	}
	return 0;
}