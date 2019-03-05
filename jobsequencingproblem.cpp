#include <bits/stdc++.h>
using namespace std;

struct val{
    int id;
    int dline;
    int profit;
};

bool compare(struct val a,struct val b)
{
    return(a.dline>b.dline);
}

void func(struct val p[],int n)
{
    sort(p,p+n,compare);
    int size = p[0].dline;
    int ar[size];
    int k = size;
    int j = 0;
    map <int,bool> m;
    int tar[n+1] = {0};
    while(k>=0)
    {
        int max = 0;
        for(int i = 0;i<n;i++)
        {
            //cout << p[i].dline << " " << k << " -- ";
            if(p[i].dline>=k && tar[p[i].id]==0)
            {
                if(max < p[i].profit) max = p[i].profit;
            }
        }
        for(int i = 0;i<n;i++)
        {
            if(max==p[i].profit)
            {
                tar[p[i].id] = 1;
                break;
            }
        }
        //for(int i = 0;i<n;i++) cout << tar[i] << " ";
        //cout << endl;
        //cout << max << " ";
        ar[k-1] = max;
        k--;
        j++;
    }
    int sum = 0;
    for(int i = 0;i<size;i++) sum+=ar[i];
    cout << sum;
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
	    func(p,n);
	    cout << endl;
	}
	return 0;
}