#include <unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> res;

        for (string s : strs)
        {
            vector<int> chars(26, 0);
            for (int i = 0; i < s.length(); i++)
            {
                chars[s[i] - 'a']++;
            }

            string key = to_string(chars[0]);
            for (int i = 1; i < chars.size(); i++)
            {
                key += ", " + to_string(chars[i]);
            }

            res[key].push_back(s);
        }
        
        
        vector<vector<string>> results;

        for (const auto& pairs : res)
        {
            results.push_back(pairs.second);
        }

        return results;
    }
};
