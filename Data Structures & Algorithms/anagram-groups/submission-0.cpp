class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> mp;
        vector<vector<string>> ans;

        for( auto p : strs)
        {
            vector<int> freq(26, 0);

            for(auto str : p)
            {
                freq[str - 'a']++;
            }

            string key = ""; 
            for(int i = 0; i<26; i++)
            {
                key = key + to_string(freq[i]) +"#";
            }

            mp[key].push_back(p);
        }

        for(auto &p : mp)
        {
            ans.push_back(p.second);
        }

        return ans;

    }
};
