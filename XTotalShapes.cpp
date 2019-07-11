#include<iostream>
using namespace std;
int n,m;
bool isLegal(int x,int y)
{
    if((x<0)||(y<0))return false;
    if((x>=n)||(y>=m))return false;
    return true;
}
void disc(int x,int y,char a[][100])
{
    a[x][y]='O';
    if(isLegal(x-1,y))
    {
        if(a[x-1][y]=='X')disc(x-1,y,a);
    }
    if(isLegal(x+1,y))
    {
        if(a[x+1][y]=='X')disc(x+1,y,a);
    }
    if(isLegal(x,y-1))
    {
        if(a[x][y-1]=='X')disc(x,y-1,a);
    }
    if(isLegal(x,y+1))
    {
        if(a[x][y+1]=='X')disc(x,y+1,a);
    }
}
int main() {
	//code
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    //int n,m;
	    cin >> n >> m;
	    char inp[100][100];
	    string s[100];
	    for(int j=0;j<n;j++)
	        cin >> inp[j];
	    int count=0;
	    for(int j=0;j<n;j++)
	        for(int k=0;k<m;k++)
	        {
	            //cout << inp[j][k] << endl;
	            if(inp[j][k]=='X')
	            {
	                disc(j,k,inp);
	                count++;
	            }
	        }
	    cout << count << endl;
	}
	return 0;
}