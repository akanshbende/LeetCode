// https://leetcode.com/problems/kth-largest-element-in-an-array/
// Heap method
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    map<int, int> m;
    int kLarge;
    sort(nums.begin(), nums.end());
    for (auto elm : nums)
    {
        m[elm]++;
    }

    int cnt = 1;
    auto itr = m.end(); // pointing to end of map

    while (cnt <= k)
    {

        itr--;
        if (cnt == k)
        {
            kLarge = itr->first;
        }
        cnt++;
    }
    return kLarge;
}
int findKthLargest1(vector<int> &nums, int k)
{
    int kLarge;
    sort(nums.begin(), nums.end());

    int cnt = 1;
    auto itr = nums.end(); // pointing to end of nums

    while (cnt <= k)
    {

        itr--;
        if (cnt == k)
        {
            kLarge = *itr;
        }
        cnt++;
    }
    return kLarge;
}
int main()
{

    // vector<int> nums = {3, 2, 1, 5, 6, 4};
    vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;
    cout << findKthLargest1(nums, k) << endl;
    return 0;
}