#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> chars;

        for (int i = 0; i < s.length(); i++)
        {
            if (chars.contains(s[i]))
                chars[s[i]]++;
            else
            {
                chars[s[i]] = 1;
            }
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (chars.contains(t[i]))
                chars[t[i]]--;
            else
                return false;
        }

        for (const auto& check : chars)
        {
            if (check.second != 0)
                return false;
        }

        return true;
    }
};
