#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            if (hash.contains(target - nums[i]))
                return {hash[target - nums[i]], i};
            
            hash[nums[i]] = i;
        }
    }
};
