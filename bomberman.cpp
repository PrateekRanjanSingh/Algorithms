#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c,n;
    cin >> r >> c >> n;
    string arr[r];
    for(int i = 0; i<r;i++)
    {
        cin >> arr[i];
    }
    int timer = 0;    
    vector <vector<int> > v;     
    for(int i = 1;i<=n;i++)
    {
        if(timer%3==0)
        {
            timer = 0;
            cout << v.size() << endl;
            v.clear();
        }
        timer++;
        if(timer==1)
        {
            //Do nothing
            for(int i = 0;i<r;i++)
            {
                for(int j = 0;j<c;j++)
                {
                    vector <int> t;
                    if(arr[i][j]=='O')
                    {
                        t.push_back(i);
                        t.push_back(j);
                        v.push_back(t);
                    }
                }
            }
        }
        else if(timer==2)
        {
            //Plant bomb at all remaining sites
            for(int i = 0;i<r;i++)
            {
                for(int j = 0;j<c;j++)
                {
                    if(arr[i][j]=='.')
                    {
                        arr[i][j]= 'O';
                    }
                }
            }
        }
        else if(timer==3)
        {
            //Detonate bombs
            for(int i = 0;i<v.size();i++)
            {
                int row = v[i][0];
                int column = v[i][1];
                //if condition for boundary
                arr[row][column] = '.';
                if(row-1>=0)
                arr[row-1][column] = '.';
                if(row+1<r)
                arr[row+1][column] = '.';
                if(column-1>=0)
                arr[row][column-1] = '.';
                if(column+1<c)
                arr[row][column+1] = '.';
            }
        }
    }
    for(int i = 0;i<r;i++)
    {
       for(int j = 0;j<c;j++)
       {
           cout << arr[i][j];
       }
       cout << endl;
    }
    return 0;
}

