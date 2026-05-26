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
            if (hash.find(nums[i] - 1) == hash.end())
            {
                int sequence = nums[i];
                int length = 1;
                while (hash.find(++sequence) != hash.end())
                    length++;
                
                longest = std::max(longest, length);
            }

                
        }

        return longest;
    }
};
