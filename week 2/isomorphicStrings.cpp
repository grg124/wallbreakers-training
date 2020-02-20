class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int l=s.length();

        unordered_map<char,char> a,b;
        for(int i=0;i<l;i++)
        {
            if(a.find(s[i])!=a.end() || b.find(t[i])!=b.end())
            {
                if(a[s[i]]!=t[i] || b[t[i]]!=s[i])
                {
                    //cout<<b[t[i]]<<endl;
                  //  cout<<s[i]<<endl;
                    return false;
                }

            }
         //   else if(a.find(s[i])==a.end() && b.find(t[i])!=b.end())
         //   {
         //       return false;
        //    else if(b.find(t[i])==b.end() && a.find(s[i])!=a.end() )
         //   {
         //       return false;
         //   }
            else
            {
                a[s[i]]=t[i];
                b[t[i]]=s[i];

            }
        }

        return true;
    }
};
