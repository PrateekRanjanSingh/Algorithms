#include <bits/stdc++.h>
using namespace std;

struct val {
    int first;
    int second;
    int index;
};

bool compare(struct val a, struct val b)
{
    return a.first<b.first;
}

void func(struct val p[],int n)
{
    sort(p,p+n,compare);
    int lis[n];
    for(int i = 0;i<n;i++) lis[i] = 1;
    
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<i;j++)
        {
            if(p[i].first>p[j].second  && lis[i]<lis[j]+1)
            {
                lis[i] = lis[j]+1;
                cout << p[j].index << " ";
            }
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
	        p[i].index = i+1;
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