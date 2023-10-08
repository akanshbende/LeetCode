#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxAscendingSum(vector<int> &nums)
{
    int maxSum = INT_MIN;
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - nums[i - 1] > 0)
        {
            sum += nums[i];
        }
        else if (nums[i] - nums[i - 1] <= 0)
        {
            maxSum = max(maxSum, sum);
            sum = nums[i];
        }
    }
    maxSum = max(maxSum, sum);
    return maxSum;
}
int main()
{
    vector<int> nums = {10, 20, 30, 5, 10, 50};
    cout << maxAscendingSum(nums);
    return 0;
}