#include <bits/stdc++.h>
using namespace std;

struct val {
    int first;
    int second;
    int index;
};

bool compare(struct val a, struct val b)
{
    return a.second<b.second;
}

void func(struct val p[],int n)
{
    sort(p,p+n,compare);
    int j = 0;
    cout << p[j].index+1 << " ";
    for(int i = 1;i<n;i++)
    {
        if(p[i].first>p[j].second)
        {
            cout << p[i].index+1 << " ";
            j = i;
        }
    }
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
	        cin >> p[i].first;
	        p[i].index = i;
	    }
	     for(int i = 0;i<n;i++)
	    {
	        cin >> p[i].second;
	    }
	    func(p,n);
	    cout << endl;
	}
	return 0;
}