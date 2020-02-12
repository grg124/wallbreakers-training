class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size();
        unordered_map <int,int> mp;
        for(int i=0;i<l;i++)
        {
            mp[nums[i]]=i;
        }
        vector<int> v;
        for(int i=0;i<l;i++)
        {
            int k=target-nums[i];

          //  if(nums[i]==k) continue;

              if( mp.find(k) != mp.end() && i!=mp[k])
              {
                v.push_back(i);
                v.push_back(mp[k]);
                break;
              }
        }

        return v;
    }
};
