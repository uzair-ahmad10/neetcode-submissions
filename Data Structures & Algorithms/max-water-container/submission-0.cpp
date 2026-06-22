class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;

        int area = 0;

        while(i < j)
        {
            int currentArea = 0;
            int minHeight = min(heights[i],heights[j]);
            currentArea = minHeight * (j - i);
            area = max(currentArea, area);

            if(heights[i]>heights[j])
            {
                j--;
            }
            else{
                i++;
            }

        }

        return area;
        
    }
};
