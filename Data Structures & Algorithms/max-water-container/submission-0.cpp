class Solution {
public:
    int maxArea(vector<int>& heights) {
        int bar1 = 0;
        int bar2 = heights.size() - 1;
        int max = 0;

        while (bar1 != bar2)
        {
            max = std::max(max, (bar2 - bar1) * min(heights[bar1], heights[bar2]));

            if (heights[bar1] < heights[bar2])
            {
                bar1++;
            }
            else
            {
                bar2--;
            }
        }

        return max;
    }
};
