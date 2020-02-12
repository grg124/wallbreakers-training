class Solution {

public:

    bool selfdiv(int n)
    {
        int k=n;
        while(k>0)
        {
            int r=k%10;
            if(r==0 || n%r!=0) return false;
            k=k/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {


        vector <int> vc;

        for(int i=left;i<=right;i++)
        {
            if(selfdiv(i))
            {
                vc.push_back(i);
            }
        }
        return vc;
    }
};
