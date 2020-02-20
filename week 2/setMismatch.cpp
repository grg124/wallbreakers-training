
const int ZERO = [](){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int hash[n]={0};
        int sum=0;
        vector<int>v;
        for(auto c:nums)
        {
            hash[c-1]++;
            if(hash[c-1]==2)
            {
                v.push_back(c);
            }
            sum+=c;
        }
        v.push_back((n*(n+1))/2 -sum+v[0]);
        return v;
    }
};
