#include <bits/stdc++.h>
using namespace std;

struct val{
    int id;
    int dline;
    int profit;
};

bool compare(struct val a, struct val b)
{
    return a.dline<b.dline;
}

int func(struct val p[], int n)
{
    sort(p,p+n,compare);
    map <int,int> m;
    for(int i = 0;i<n;i++)
    {
        m[p[i].dline]++;
    }
    map <int,int> :: iterator it;
    int index = 0;
    int dl = 0;
    int sum = 0;
    int count = 0;;
    for(it = m.begin();it!=m.end();it++)
    {
        if(dl > it->first) continue;
        int t = it->second;
        int max = 0;
        int i;
        for(i = index;i<t+index;i++)
        {
            if(max < p[i].profit) max = p[i].profit;
        }
        sum+=max;
        dl += it->first;
        index = i;
        count++;
    }
    cout << count << " ";
    return sum;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    struct val p[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> p[i].id >> p[i].dline >> p[i].profit;
	    }
	    cout << func(p,n) << endl;
	}
	return 0;
}