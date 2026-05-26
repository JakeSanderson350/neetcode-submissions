#include <unordered_map>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_map<int, int> hash;
        int longest = 0;

        for (int i = 0; i < nums.size(); i++)
            hash[nums[i]] = i;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (!hash.contains(nums[i] - 1))
            {
                int sequence = nums[i];
                int length = 1;
                while (hash.contains(++sequence))
                    length++;
                
                longest = std::max(longest, length);
            }

                
        }

        return longest;
    }
};
