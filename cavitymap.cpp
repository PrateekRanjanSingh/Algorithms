#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) 
{
    int n = grid.size();
    for(int i = 1;i<n-1;i++)
    {
        for(int j = 1;j<n-1;j++)
        {
            int t = grid[i][j];
            //int a = grid[i-1][j-1];
            int b = grid[i-1][j];
            //int c = grid[i-1][j+1];
            int d = grid[i][j-1];
            int e = grid[i][j+1];
            //int f = grid[i+1][j-1];
            int g = grid[i+1][j];
            //int h = grid[i+1][j+1]; 
            if(b < t && d < t && e < t && g < t) 
            grid[i][j] = 'X';
        }
    }
    return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
