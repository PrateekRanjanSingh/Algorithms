#include <bits/stdc++.h>
#define MAX 256
using namespace std;

bool compare(int ar1[],int ar2[])
{
    for(int i = 0;i<256;i++)
    {
        if(ar1[i]!=ar2[i]) return false;
    }
    return true;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s,c;
	    cin >> s >> c;
	    int ar1[256] = {0};
	    int ar2[256] = {0};
	    for(auto x: c)
	    {
	        ar2[x]++;
	    }
	    int count = 0;
	    for(int i = 0;i<c.length();i++)
	    {
	        ar1[s[i]]++;
	    }
	    if(compare(ar1,ar2)) count++;
	    for(int i = c.length();i<s.length();i++)
	    {
	        ar1[s[i]]++;
	        ar1[s[i-c.length()]]--;
	        if(compare(ar1,ar2)) count++;
	    }
	    cout << count << endl;
	}
	return 0;
}