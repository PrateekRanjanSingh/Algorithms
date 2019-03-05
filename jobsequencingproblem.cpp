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

<------------------------------------------------------------------------------------------------------>
<------------------------------------------------------------------------------------------------------>
/*

Correct Code

*/
#include<algorithm>
using namespace std;
struct job{
    int jid,deadline,profit;
};
bool compare(job j1, job j2){
    return j1.profit>j2.profit;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        job arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].jid;
            cin>>arr[i].deadline;
            cin>>arr[i].profit;
        }
        sort(arr,arr+n,compare);
        
        bool slot[n];
        int maxprofit=0,c=0;
        for (int i=0; i<n; i++) 
          slot[i] = false; 
        for (int i=0; i<n; i++) 
        { 
           for (int j=min(n, arr[i].deadline)-1; j>=0; j--) 
           { 
              if (slot[j]==false) 
              { 
                 c++;
                 maxprofit=arr[i].profit+maxprofit;
                 slot[j] = true; 
                 break; 
              } 
           } 
        }
    
         cout << c <<" "<< maxprofit<<endl;
 
    }
    return 0;
}