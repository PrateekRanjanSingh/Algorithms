#include <iostream>
using namespace std;

int cutRod(int ar[],int n)
{
    int table[n][n+1];
    for(int i = 0;i<n;i++)
    {
        table[i][0] = 0;
    }
    
    for(int j = 1;j<n+1;j++)
    {
        table[0][j] = table[0][j-1] + ar[0];
    }
    
    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<n+1;j++)
        {
            if(j>=i+1)
            {
                table[i][j] = max(table[i][j-i-1] + ar[i],table[i-1][j]);
            }
            else
            {
                table[i][j] = table[i-1][j];
            }
            
        }
    }
    return table[n-1][n];
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int ar[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> ar[i];
	    }
	    cout << cutRod(ar,n) << endl;
	}
	return 0;
}