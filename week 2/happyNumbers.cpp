
class Solution {
public:

    int sqdig(int n)
    {
        int sum=0;
        while(n>0)
        {
            int r=n%10;
            sum+=r*r;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        bool repeat=false;
        unordered_set<int>v;
        v.insert(n);
        while(repeat==false)
        {
            if(n==1)
            {
                return true;
            }
            int prevsize=v.size();
            n=sqdig(n);
            v.insert(n);
            int newsize=v.size();
            if(prevsize==newsize)
            {
                return false;
            }
        }
        return false;
    }
};
