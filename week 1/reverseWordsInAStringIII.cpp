class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string ans;
        while(i<s.length())
        {
            if(s.find(' ',i) ==std::string:: npos)
            {
                string sub;
                sub=sub+s.substr(i,s.length()-i);
                reverse(sub.begin(),sub.end());

                ans=ans+sub;
                i=s.length();
            }
            else if(s.find(' ',i) !=std::string:: npos)
            {
                int n=s.find(' ',i+1);

                string sub;
                sub=sub+s.substr(i,n-i);
                reverse(sub.begin(),sub.end());

                ans=ans+sub+" ";
                i=n+1;
            }
        }
        return ans;
    }
};
