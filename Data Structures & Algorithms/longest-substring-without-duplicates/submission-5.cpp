class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int maxCount = 0;
        int left = 0;
        //"abcabcbb"

        for(int i = 0; i<s.length(); i++)
        {
            while(st.find(s[i]) != st.end())
            {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[i]);
            maxCount = max(maxCount,i-left+1);
        }
        return maxCount;
    }
};