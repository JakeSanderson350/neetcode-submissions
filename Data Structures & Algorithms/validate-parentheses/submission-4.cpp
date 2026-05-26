class Solution {
public:
    bool isValid(string s) {
        if (s.length() <= 1)
            return false;
        
        std::stack<int> open;

        std::unordered_map<char, char> brackets;
        brackets['('] = ')';
        brackets['['] = ']';
        brackets['{'] = '}';

        for (int i = 0; i < s.length(); i++)
        {
            // push open
            if (brackets.contains(s[i]))
                open.push(s[i]);
            // check closed brackets against stack
            else if (open.size() > 0)
            {
                if (s[i] != brackets[open.top()])
                    return false;
                
                open.pop();
            }
            else
                return false;
        }

        if (open.size() == 0)
            return true;
        return false;
    }
};
