class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int lj=J.length(),ls=S.length(),count=0;
        for(int i=0;i<lj;i++)
        {
            for(int j=0;j<ls;j++)
            {
                if(J[i]==S[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
