class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]<='Z' && word[i]>='A')
            {
                cap++;
            }
        }

        if((cap==1 && word[0]<='Z' && word[0]>='A') || cap==0 || cap==word.length())
        {
            return true;
        }
        return false;
    }
};
