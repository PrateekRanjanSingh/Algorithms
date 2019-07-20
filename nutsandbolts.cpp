#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string ar1[n],ar2[n];
	    map<string,int>m,m1,m2;
	    //! # $ % & * @ ^ ~
	    m["!"] = 1;
	    m["#"] = 2;
	    m["$"] = 3;
	    m["%"] = 4;
	    m["&"] = 5;
	    m["*"] = 6;
	    m["@"] = 7;
	    m["^"] = 8;
	    m["~"] = 9;
	    for(int i = 0;i<n;i++)
	    {
	        string s;
	        cin >> s;
	        m1[s]++;
	    }
	    for(int i = 0;i<n;i++)
	    {
	        string s;
	        cin >> s;
	        m2[s]++;
	    }
	    map<string,int> :: iterator it;
	    for(it = m.begin();it!=m.end();it++)
	    {
	        if(m1.find(it->first)!=m1.end() && m2.find(it->first)!=m2.end())
	        {
	            cout << it->first << " ";
	        }
	    }
	    cout << endl;
	    for(it = m.begin();it!=m.end();it++)
	    {
	        if(m1.find(it->first)!=m1.end() && m2.find(it->first)!=m2.end())
	        {
	            cout << it->first << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}