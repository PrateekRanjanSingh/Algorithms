

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