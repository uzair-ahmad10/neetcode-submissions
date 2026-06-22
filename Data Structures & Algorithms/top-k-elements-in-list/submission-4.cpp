class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

       int n = nums.size();
    unordered_map<int, int> mp;

    for(int i : nums) {
        mp[i]++;
    }

    // Index = Frequency, Value = List of numbers with that frequency
    vector<vector<int>> bucket(n + 1);

    for(auto const& [num, freq] : mp) { // Changed [freq, val] to [num, freq]
        bucket[freq].push_back(num);    // Use freq as the index
    }

    vector<int> res;
    // Start from n (the max possible frequency) down to 0
    for(int i = n; i >= 0; i--) {
        for(int num : bucket[i]) {
            res.push_back(num);
            if(res.size() == k) return res;
        }
    }

    return res;
        
    }
};
