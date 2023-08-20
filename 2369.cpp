// https://leetcode.com/problems/check-if-there-is-a-valid-partition-for-the-array/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool validPartition(vector<int> &nums)
{
    int size = nums.size();
    int j = 0;
    bool flag;
    bool flag1;
    bool flag2;
    // bool flag3;
    while (j < size)
    {
        int a = nums[j];
        int b = nums[j + 1];
        int c = nums[j + 2];

        if ((a == b && b == c))
        {
            flag1 = true;
            // return flag1;
            // break;
        }
        else
        {
            flag1 = false;
        }

        if ((b - a) == 1 && (c - b) == 1)
        {
            flag2 = true;
        }
        else
        {
            flag2 = false;
        }
        if (flag1 || flag2)
        {
            flag = true;
            return flag;
        }
        else
        {
            flag = false;
            return flag;
        }
    }

    return flag;
}
int main()
{
    // vector<int> nums = {4, 4, 4, 5, 6};
    vector<int> nums = {1, 1, 1, 2};
    for (auto num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    int ans = validPartition(nums);
    cout << "Answer : ";
    if (ans)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}