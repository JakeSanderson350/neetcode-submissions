#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            int dif = target - nums[i];
            if (hash.contains(dif))
                return {hash[dif], i};
            
            hash[nums[i]] = i;
        }

        return {};
    }
};
