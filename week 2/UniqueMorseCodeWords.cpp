class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> g;
        for(auto w:words)
        {
            string r;
            for(auto c:w)
            {
                r+=s[c-'a'];
               // r.push_back(s[c-'a']);
            }
            g.insert(r);
        }

        return g.size();

    }
};
