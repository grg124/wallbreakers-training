class Solution {
public:

    vector<string> uncommonFromSentences(string A, string B) {


        int a=A.length(),b=B.length();
        unordered_map<string,int> cnta,cntb;

        int prev=-1,next;


        string k;
        for(int i=0;i<a;i++)
        {
            if(A[i]==' ')
            {
                cnta[k]++;
                k="";
            }
            else
            {
                k.push_back(A[i]);
            }
            if(i==a-1)
            {
                cnta[k]++;
                k="";
            }
        }


        for(int i=0;i<b;i++)
        {
            if(B[i]==' ')
            {
                cntb[k]++;
                k="";
            }
            else
            {
                k.push_back(B[i]);
            }
            if(i==b-1)
            {
                cntb[k]++;
                k="";
            }
        }

        vector<string> g;
        for(auto i:cnta)
        {
            if(i.second==1 && cntb.find(i.first)== cntb.end())
            {
                g.push_back(i.first);
            }
        }

        for(auto i:cntb)
        {
            if(i.second==1 && cnta.find(i.first)== cnta.end())
            {
                g.push_back(i.first);
            }
        }
        return g;
    }
};
