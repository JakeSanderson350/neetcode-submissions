#include <algorithm>

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > max) return false;
            max = std::max(max, i + nums[i]);
        }

        return true;
        
        
        int numSize = nums.size();

        if (numSize == 0) return false;
        if (numSize == 1) return true;

        return rec(nums, 0);
    }

    
    bool rec (vector<int>& nums, int ind)
    {
        if (ind == nums.size() - 1)
            return true;
        
        int end = std::min((int)nums.size() - 1, ind + nums[ind]);

        for (int i = ind + 1; i <= end; ++i)
        {
            if (rec(nums, i))
                return true;
        }

        return false;
    }
};
