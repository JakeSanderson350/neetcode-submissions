class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int check;

        for (int i = 0; i < nums.size(); i++)
        {
            check = nums[i];

            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] == check && j != i)
                    return true;
            }
        }

        return false;
    }
};