class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxCount = 0;
        vector<int> freq(26,0);
        int left = 0;
        int maxFreq = 0;

        for(int i = 0; i<s.length(); i++)
        {
            freq[s[i] - 'A']++;

            int windowSize = i - left + 1;
            maxFreq = max(maxFreq,freq[s[i] - 'A']);

            if(windowSize - maxFreq > k) 
            {
                freq[s[left] - 'A']--;
                left++;
            }

            maxCount = max(maxCount, i - left +1);
        }
        return maxCount;
    }
};
