#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            res.push_back(i);
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 3;
    vector<int> ans = targetIndices(nums, target);
    cout << "[ ";
    for (auto a : ans)
    {
        cout << a << " ";
    }
    cout << "]";
    return 0;
}