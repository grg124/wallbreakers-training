class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int n=A.size(),m=A[0].size();
        vector <vector<int>> mat;
        for(int j=0;j<m;j++)
        {
            vector<int> row;
            for(int i=0;i<n;i++)
            {
                row.push_back(A[i][j]);
            }

            mat.push_back(row);
        }
        return mat;
    }
};
