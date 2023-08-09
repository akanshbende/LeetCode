class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int j = 0;
        for (auto elm : nums)
        {
            if (elm != val)
            {
                nums[j] = elm;
                j++;
            }
        }
        return j;
    }
};
