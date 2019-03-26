#include <bits/stdc++.h>

using namespace std;
int maxcount()
{
    
}
int main()
{
    int n,q;
    cin >> n >>q;
    vector<vector <int>> queries(q);
    for(int i = 0;i<q;i++)
    {
        for(int j=0;j<3;j++)
        {
            int a;
            cin >> a;
            queries[i].push_back(a);
        }
    }
    for(int i=0;i<q;i++)
    {
    	for(int j=0;j<3;j++)
    	cout << queries[i][j] << " ";
		cout << endl;	
	}
    
}
