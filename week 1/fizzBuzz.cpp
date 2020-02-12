class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string > vc;
        map <int ,string> m;

        m[3]="Fizz";
        m[5]="Buzz";
        for(int i=1;i<=n;i++)
        {
            string s;

            for(auto j:m)
            {
                if(i%(j.first)==0)
                {
                    s+=(j.second);
                }
            }
            if(s.length()==0)
            {
                s+=to_string(i);
            }

            vc.push_back(s);

        }
        return vc;
    }
};
