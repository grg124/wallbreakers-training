class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        int n=A.size(),m=A[0].size();
        vector<vector<int>> out( n , vector<int> (m));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i][j]==1)
                {
                    out[i][m-j-1]=0;
                }
                else
                {
                    out[i][m-j-1]=1;
                }
            }
        }

        return out;
    }
};
