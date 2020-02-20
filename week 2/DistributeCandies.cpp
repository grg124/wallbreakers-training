class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int,int>mp;
        int n=candies.size();
        for(int i=0;i<n;i++)
        {
            mp[candies[i]]++;
        }

        int t=mp.size();
        if(t<=n/2)
        {
            return t;
        }
        return n/2;
    }
};
