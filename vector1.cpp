#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the array2D function below.
 */
int array2D(vector<vector<int>> arr) {
    /*
     * Write your code here.
     */
    int sum1,sum2,sum3 = 0;
    int i,j,k,sum;
    for(k=0;k<4;k++)
    {
        for(i=0;i<4;i++)
        {
            j = i;
            while(j < j+3)
            {
                sum1 = sum1 + arr[k][j];
                sum2 = sum2 + arr[k+2][j];
                sum3 = sum3 + arr[k+1][j+1];
                j++;
            }
            sum = sum1+sum2+(sum3/3);
        }   
    }
    return sum;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int arr_row_itr = 0; arr_row_itr < 6; arr_row_itr++) {
        arr[arr_row_itr].resize(6);

        for (int arr_column_itr = 0; arr_column_itr < 6; arr_column_itr++) {
            cin >> arr[arr_row_itr][arr_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = array2D(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

