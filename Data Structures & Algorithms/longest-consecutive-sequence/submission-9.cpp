class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        unordered_set<int> hashSet;
        int maxCount = 1;

        // inserting the each element of array in set
        for( int num : nums) hashSet.insert(num);

        //[100,4,200,1,3,2]
        for(int n : hashSet)
        {
            if(hashSet.find(n-1) == hashSet.end())
            {
                int count = 1;
                int num = n;
                while(hashSet.find(num+1) != hashSet.end())
                {
                    count++;
                    num = num + 1;
                }
                maxCount = max(maxCount,count);
            }   
        }
        return maxCount;
    }
};
