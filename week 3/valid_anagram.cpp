static auto x = []{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int l=s.length();
        int a[26]={0};
        for(auto c:s)
        {
            a[c-'a']++;

        }
        for(auto c:t)
        {
            a[c-'a']--;
        }
        for(auto f:a)
        {
            if(f!=0) return false;
        }
        return true;
    }
};
