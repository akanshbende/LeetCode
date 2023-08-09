// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (auto num : nums)
        {
            m[num]++;
        }
        int ct = 0;
        for (auto val : m)
        {
            if (val.second > 1)
            {
                ct++;
            }
        }
        if (ct > 0)
        {
            return true;
        }
        else
            return false;
    }
};