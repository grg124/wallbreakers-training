class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int hashs[26],hasht[26];
        memset(hashs,0,sizeof(hashs));
        memset(hasht,0,sizeof(hasht));
        for(int i=0;i<s.size();i++)
        {
            hashs[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++)
        {
            hasht[t[i]-'a']++;
        }
         for(int i=0;i<26;i++)
        {
            if(hashs[i]!=hasht[i])
            {
                return false;
            }
        }
        return true;
    }
};
