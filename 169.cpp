#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 169. Majority Element
// https://leetcode.com/problems/majority-element/description/
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return candidate;
}
int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;

    return 0;
}