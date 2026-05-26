#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            if (hash.contains(nums[i]))
                return true;
            else
                hash.insert(nums[i]);
        }

        return false;
    }
};