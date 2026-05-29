class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> results;
        int size = nums.size();
        int prod = 1;
        int zeros = 0;

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 0)
            {
                zeros++;

                if (zeros > 1)
                    return vector<int>(size, 0);
            }
            else
            {
                prod *= nums[i];
            }
        }

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 0)
            {
                results = vector<int>(size, 0);
                results[i] = prod;
                return results;
            }

            results.push_back(prod / nums[i]);
        }


        return results;
    }
};
