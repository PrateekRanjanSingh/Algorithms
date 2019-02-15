/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/
/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
    //Your code here
    map <int,int> m;
    for(int i = 0;i<n;i++)
    {
        m[p[i].first] = p[i].second;
    }
    struct val t[n];
    map<int,int> :: iterator itr;
    for(int i = 0,itr = m.begin();i<n;i++,itr++)
    {
        t[i].first = itr->first;
        t[i].second = itr->second;
    }
    int lis[n];
    for(int i = 0;i<n;i++) lis[i] = 1;
    
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<i;j++)
        {
            if(t[i].first>t[j].second && lis[i]<lis[j]+1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    int max = 0;
    for(int i = 0;i<n;i++)
    {
        if(max < lis[i]) max = lis[i];
    }
    return max;
}