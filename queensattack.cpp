#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
// void formgrid(vector<vector<int>> v)
// {
//     int n = v.size();
//     int arr[n][n] = {0};
// }


// Complete the queensAttack function below.
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles)
{
    int arr[n][n] = {};
    if(obstacles.size()>0)
    {
        for(int i = 0;i<obstacles.size();i++)
        {
            arr[obstacles[i][0]-1][obstacles[i][1]-1]++;
        }
    }
    int r = r_q-1;
    int c = c_q-1;
    arr[r][c] = 1;
    int count = 0;
    //For rows
    for(int i = c+1;i<n;i++)
    {
        if(arr[r][i]==1) break;
        else if(arr[r][i]==0) count++;
    }
    for(int i = c-1;i>=0;i--)
    {
        if(arr[r][i]==1) break;
        else if(arr[r][i]==0) count++;
    }
    //For columns
    for(int i = r+1;i<n;i++)
    {
        if(arr[i][c]==1) break;
        else if(arr[i][c]==0) count++;
    }
    for(int i = r-1;i>=0;i--)
    {
        if(arr[i][c]==1) break;
        else if(arr[i][c]==0) count++;
    }
    //For positive slope diagonal
    for(int i = r+1,j=c+1;i<n && j<n;i++,j++)
    {
        if(arr[i][j]==1) break;
        else if(arr[i][j]==0) count++;
    }
    for(int i = r-1,j=c-1;i>=0 && j>=0;i--,j--)
    {
        if(arr[i][j]==1) break;
        else if(arr[i][j]==0) count++;
    }
    //For negative slope diagonal
    for(int i = r+1,j=c-1;i<n && j>=0;i++,j--)
    {
        if(arr[i][j]==1) break;
        else if(arr[i][j]==0) count++;
    }
    for(int i = r-1,j=c+1;i>=0 && j<n;i--,j++)
    {
        if(arr[i][j]==1) break;
        else if(arr[i][j]==0) count++;
    }
    for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string r_qC_q_temp;
    getline(cin, r_qC_q_temp);

    vector<string> r_qC_q = split_string(r_qC_q_temp);

    int r_q = stoi(r_qC_q[0]);

    int c_q = stoi(r_qC_q[1]);

    vector<vector<int>> obstacles(k);
    for (int i = 0; i < k; i++) {
        obstacles[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> obstacles[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
