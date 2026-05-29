class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> results;
        int size = nums.size();

        for (int i = 0; i < size; i++)
        {
            int sum = 1;

            for (int j = 0; j < size; j++)
            {
                if (j != i)
                    sum *= nums[j];
            }

            results.push_back(sum);
        }

        return results;
    }
};
