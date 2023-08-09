// https://leetcode.com/problems/single-element-in-a-sorted-array/description/
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        map<int, int> m;
        vector<int> v;
        int output;
        for (int num : nums)
        {
            m[num]++;
        }

        for (auto val : m)
        {
            if (val.second == 1)
            {
                //  v.push_back(val.first);
                output = val.first;
            }
        }
        return output;
        //  return v;
    }
};
Console
