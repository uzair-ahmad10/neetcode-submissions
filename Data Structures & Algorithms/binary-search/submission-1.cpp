class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;

        while(i <= j)
        {
            int avg = (i+j)/2;

            if(nums[avg] == target)
            return avg;
            else if (nums[avg] < target)
            i = avg + 1;
            else
            j = avg - 1;
        }
        return -1;
    }
};
