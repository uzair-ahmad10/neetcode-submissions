class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int maxCount = 0;
        //"abcabcbb"

        for(int i = 0; i<s.length(); i++)
        {
            int count = 0;
            for(int j = i; j<s.length(); j++)
            {
                if(st.find(s[j]) != st.end())
                break;

                count++;
                st.insert(s[j]);
                
            }
            st.clear();
            maxCount = max(count,maxCount);
        }
        return maxCount;
    }
};