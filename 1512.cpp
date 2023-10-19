// https://leetcode.com/problems/number-of-good-pairs/?envType=daily-question&envId=2023-10-03
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 1512. Number of Good Pairs

//===========BRUTFORCE================
int numIdenticalPairs(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}
//=============OPTIMAL===============
int numIdenticalPairs1(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;
    unordered_map<int, int> m;
    for (auto num : nums)
    {
        m[num]++;
    }
    for (auto itr : m)
    {
        int num = itr.second;
        if (num > 1)
        {
            cnt += (num * (num - 1)) / 2;
        }
    }
    return cnt;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    cout << numIdenticalPairs(nums) << endl;
    cout << numIdenticalPairs1(nums) << endl;

    return 0;
}