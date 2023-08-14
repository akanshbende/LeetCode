// https://leetcode.com/problems/search-insert-position/submissions/

//--------------BINARY SEARCH APPROACH----------------
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SearchInsertPosition(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size();
    int mid;

    if (target > nums[high - 1])
    {
        return high;
    }
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (target < nums[mid])
        {
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> nums = {3, 6, 7, 8, 10};
    int target = 5;

    cout << "Index is : " << SearchInsertPosition(nums, target);
    return 0;
}