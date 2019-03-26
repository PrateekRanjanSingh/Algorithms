#include <iostream>
using namespace std;
const int n=100,m=100;
void func(int ar[n][m],int x,int y,int k, int t,int a, int b)
{
    if(x>=a||y>=b||x<0||y<0) return;
    if(ar[x][y]!=t) return;
    ar[x][y] = k;
    func(ar,x+1,y,k,t,a,b);
    func(ar,x-1,y,k,t,a,b);
    func(ar,x,y+1,k,t,a,b);
    func(ar,x,y-1,k,t,a,b);
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    int ar[n][m]={-1,-1};
	    for(int i = 0;i<a;i++)
	    for(int j = 0;j<b;j++)
	    {
	        cin >> ar[i][j];
	    }
	    int x,y,k;
	    cin >>x >> y >> k;
	    int t = ar[x][y];
	    func(ar,x,y,k,t,a,b);
	    for(int i = 0;i<a;i++)
	    {
	        for(int j = 0;j<b;j++)
    	    {
    	        cout << ar[i][j] << " ";
    	    }
	    }
	    cout << endl;
	}
	return 0;
}