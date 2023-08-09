// https://leetcode.com/problems/move-zeroes/description/
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0;
        if (nums.size() == 0 || nums.size() == 1)
            return;

        while (j < nums.size())
        {
            if (nums[j] == 0)
            {
                ++j;
            }
            else
            {
                swap(nums[i], nums[j]);
                ++i;
                ++j;
            }
        }
    }
};