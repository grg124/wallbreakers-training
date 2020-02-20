class Solution {
public:
    char findTheDifference(string s, string t) {
        int l=s.length(),k=t.length();
        int hashs[26]={0},hasht[26]={0};
        for(auto c:s)
        {
            hashs[c-'a']++;
        }

        for(auto c:t)
        {
            hasht[c-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(hashs[i]!=hasht[i])
            {
                return i+'a';
            }
        }
        return '-1';

    }
};
