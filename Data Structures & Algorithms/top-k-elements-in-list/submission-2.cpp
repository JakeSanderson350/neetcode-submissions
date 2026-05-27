#include <unordered_map>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<vector<int>> freq(nums.size() + 1);

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.contains(nums[i]))
                mp[nums[i]]++;
            else
                mp[nums[i]] = 1;
        }
        for (const auto& pairs : mp)
        {
            freq[pairs.second].push_back(pairs.first);
        }


        vector<int> results;
        for (int i = freq.size() - 1; i > 0; i--)
        {
            for (int j = 0; j < freq[i].size(); j++)
            {
                results.push_back(freq[i][j]);

                if (results.size() == k)
                    return results;
            }
        }

        return results;
    }
};
