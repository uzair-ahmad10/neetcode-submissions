class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);

        int r = 0, l = 0;
        int st = 0;
        int len = t.length();
        int minLen = INT_MAX;

        for(auto c : t){
            freq[c]++;
        }

        while(r < s.length())
        {
            if(freq[s[r]] > 0)
            len--;

            freq[s[r]]--;
            r++;

            while(len == 0)
            {
                if(r - l < minLen)
                {
                    minLen = r - l;
                    st = l;
                }

                freq[s[l]]++;

                if(freq[s[l]] > 0)
                len++;

                l++;
            }
        }

        if(minLen == INT_MAX)
        return "";

        return s.substr(st,minLen);
        
    }
};
