#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 442. Find All Duplicates in an Array
// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int indx = abs(nums[i]) - 1;
        if (nums[indx] < 0)
        {
            ans.push_back(abs(nums[i]));
        }
        else
        {
            nums[indx] = -nums[indx];
        }
    }
    return ans;
}
vector<int>
findDuplicatesON(vector<int> &nums)
{
    vector<int> ans;
    unordered_map<int, int> frequency;

    for (int num : nums)
    {
        if (frequency.find(num) != frequency.end())
        {
            // This element is a duplicate
            ans.push_back(num);
        }
        else
        {
            // First occurrence of the element
            frequency[num] = 1;
        }
    }

    return ans;
}
vector<int> findDuplicatesON2(std::vector<int> &nums)
{
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) // IMP
        {
            if (nums[i] == nums[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    // vector<int> ans = findDuplicates(nums);
    vector<int> ans = findDuplicatesON2(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}