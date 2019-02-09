#include <bits/stdc++.h>
using namespace std;

void func(int n,map<int,bool>m,vector<int>v,int t)
{
    if(n==t)
    {
        return;
    }
    if(v[n-1]-n>0 && !m[v[n-1]-n])
    {
        cout << v[n-1]-n<< " ";
        v.push_back(v[n-1]-n);
        m[v[n]] =true;
    }
    else
    {
        cout << v[n-1]+n<<" ";;
        v.push_back(v[n-1]+n);
        m[v[n]] =true;
    }
    func(n+1,m,v,t);
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>v;
	    map<int,bool>m;
    	v.push_back(0);
    	cout << 0 << " ";
    	func(1,m,v,n);
    	cout << endl;
	}
	return 0;
}