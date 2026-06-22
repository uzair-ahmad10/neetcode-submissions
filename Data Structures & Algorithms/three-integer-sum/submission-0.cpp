class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            
            int target = -nums[i];
            set<int> s;
            

            for(int j = i + 1; j < n; j++)
            {
                int tar = target - nums[j];
                if(s.find(tar) != s.end())
                {
                    vector<int> trip = {nums[i], nums[j], tar};
                    sort(trip.begin(), trip.end());

                    if(st.find(trip) == st.end())
            {
                st.insert(trip);
                ans.push_back(trip);
            }
                }
                s.insert(nums[j]);
            }
        }
        
        return ans;
    }
};
