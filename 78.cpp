// 78. Subsets
// https: // leetcode.com/problems/subsets/description/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Solve(int idx, vector<int> &res, vector<vector<int>> &ans, vector<int> &nums, int n)
{
    // TC :=  O(2^N)
    // SC  := O(N) -max stack space = no recursion calls
    if (idx == n)
    {
        ans.push_back(res);
        return;
    }
    res.push_back(nums[idx]);
    Solve(idx + 1, res, ans, nums, n);
    res.pop_back();
    Solve(idx + 1, res, ans, nums, n);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    vector<int> res;
    Solve(0, res, ans, nums, n);
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3};
    vector<vector<int>> answer = subsets(v);
    for (auto vec : answer)
    {
        // cout << "[ ";
        for (auto num : vec)
        {
            cout << num;
        }
        cout << endl;
        // cout << " ]";
    }
    return 0;
}
