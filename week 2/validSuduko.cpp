
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();

        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> mp;
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]!='.')
                {    mp[board[i][j]]++;

                    if(mp[board[i][j]]>1)
                    {
                        return false;
                    }
                }
            }
        }








        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> mp;
            for(int j=0;j<n;j++)
            {
                if(board[j][i]!='.')
                {
                    mp[board[j][i]]++;

                    if(mp[board[j][i]]>1)
                    {
                        return false;
                    }
                }
            }

        }


        for(int i=0;i<n;i+=3)
        {
            for(int j=0;j<n;j+=3)
            {
                unordered_map<int,int> mp;
                int a=i,b=j;
                for(int k=a;k<a+3;k++)
                {
                    for(int l=b;l<b+3;l++)
                    {
                         if(board[k][l]!='.')
                         {
                             mp[board[k][l]]++;

                            if(mp[board[k][l]]>1)
                            {
                                return false;
                            }
                         }

                    }
                }
            }
        }


       return true;
    }
};
