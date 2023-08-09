// https://leetcode.com/submissions/detail/919587114/

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long total_cnt = 0;
        long long curr_cnt = 0;

        long long n = nums.size();
        for (long long i = 0; i < n; i++)
        {
            // count consecutive 0's
            if (nums[i] == 0)
            {
                // increase the curr_cnt of 0's and add it to total_cnt
                curr_cnt++;
                total_cnt += curr_cnt;
            }
            // if there is no 0 then current cnt of 0 will become 0
            else
            {
                curr_cnt = 0;
            }
        }

        return total_cnt;
    }
};