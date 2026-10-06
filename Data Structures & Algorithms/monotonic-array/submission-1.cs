public class Solution {
    public bool IsMonotonic(int[] nums) {
        bool isMono = false;

        for (int i = 0; i < nums.Length - 1; i++)
        {
            if (nums[i] >= nums[i + 1])
            {
                isMono = true;
            }
            else
            {
                isMono = false;
                i = nums.Length;
            }
        }

        if (!isMono)
        {
            for (int i = 0; i < nums.Length - 1; i++)
            {
                if (nums[i] <= nums[i + 1])
                {
                    isMono = true;
                }
                else
                {
                    isMono = false;
                    i = nums.Length;
                }
            }
        }
        

        return isMono;
    }
}