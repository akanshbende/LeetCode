#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int second = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

    if (first == nums.size() || nums[first] != target)
        return {-1, -1};

    ans.push_back(first);
    ans.push_back(second - 1);

    return ans;
}
int main()
{
    vector<int> v = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = searchRange(v, target);

    for (auto a : ans)
    {
        cout << a << " ";
    }

    return 0;
}