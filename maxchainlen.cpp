bool compare(struct val a,struct val b)
{
     return a.first<b.first;
}
int maxChainLen(struct val p[],int n)
{
    //Your code here
    sort(p,p+n,compare);
    int lis[n];
    for(int i = 0;i<n;i++) lis[i] = 1;
    
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<i;j++)
        {
            if(p[i].first>p[j].second && lis[i]<lis[j]+1)
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