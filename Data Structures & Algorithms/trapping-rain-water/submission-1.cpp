class Solution {
public:
    int trap(vector<int>& height) {
        int maxWater = 0;
        int n = height.size() - 1;
        int lMax = 0;
        int rMax = 0;
        int l = 0;
        int r = n;

        while( l < r)
        {
            lMax =  max(lMax,height[l]);
            rMax =  max(rMax,height[r]);

            if(rMax < lMax)
            {
                maxWater += (rMax - height[r]); 
                r--;
            }
            else
            {
                maxWater += (lMax - height[l]);
                l++; 
            }

        }
        return maxWater;
    }
};
