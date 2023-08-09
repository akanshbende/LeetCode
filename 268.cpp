// https://leetcode.com/problems/missing-number/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] != i)
            {
                return i;
            }
        }
        return i;
    }
};