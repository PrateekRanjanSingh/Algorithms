class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        if(numRows == 0)
        {
            return v;
        }
        vector<int>t;
        t.push_back(1);
        v.push_back(t);
        for(int i = 1;i<numRows;i++)
        {
            vector<int>tempv;
            for(int j = 0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    tempv.push_back(1);
                }
                else
                {
                    int temp = v[i-1][j] + v[i-1][j-1];
                    tempv.push_back(temp);
                }
            }
            v.push_back(tempv);
        }
        return v;
    }
};