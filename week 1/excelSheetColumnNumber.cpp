class Solution {
public:

    // for length l=1 ->26^0
    //            l=2  -> 26^1+26^0
    //            l=3   ->26^2 +26^1 +26^0


    // by current string sum(s[i]*26^(n-i-1))  from 0 to s.length()

    int cal(int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+pow(26,i);
        }

        return sum;
    }
    int titleToNumber(string s) {
        int l=s.length();
        int sum=cal(l);
        for(int i=0;i<l;i++)
        {
            sum=sum+(s[i]-'A')*pow(26,l-i-1);
        }

        return sum;
    }
};
