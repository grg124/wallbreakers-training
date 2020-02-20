static auto x = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int firstUniqChar(string s) {
        int l=s.length();
        int mp[26]={0};

        for(int i=0;i<l;i++)
        {
            mp[s[i]-'a']++;
        }

        for(int i=0;i<l;i++)
        {
            if(mp[s[i]-'a']==1)
            {
                return i;
            }
        }
        return -1;
    }
};
