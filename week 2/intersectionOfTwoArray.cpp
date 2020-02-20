class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(),l2=nums2.size();
        int m=min(l1,l2);
        vector<int> v;
         unordered_set <int> s;
        if(l1==m)
        {

            for(auto i: nums1)
            {
                s.insert(i);
            }

            sort(nums2.begin(),nums2.end());

            for(auto i:s)
            {
                if(binary_search(nums2.begin(),nums2.end(),i))
                {
                    v.push_back(i);
                }
            }
        }
        else
        {

            for(auto i: nums2)
            {
                s.insert(i);
            }

            sort(nums1.begin(),nums1.end());

            for(auto i:s)
            {
                if(binary_search(nums1.begin(),nums1.end(),i))
                {
                    v.push_back(i);
                }
            }
        }

        return v;
    }
};
