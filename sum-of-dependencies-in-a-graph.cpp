#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    map<int , vector<int>> m;
	    int n,e;
	    cin >> n >> e;
	    while(e--)
	    {
	        int a,b;
	        cin >> a >> b;
	        m[a].push_back(b);
	    }
	    int count = 0;
	    map <int ,vector<int>> :: iterator it;
	    for(it = m.begin();it!=m.end();it++)
	    {
	        count += it->second.size();
	    }
	    cout << count << endl;
	}
	
	return 0;
}