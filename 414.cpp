// https : // leetcode.com/problems/third-maximum-number/submissions/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int thirdMax(vector<int> &nums)
{
    int size = nums.size();
    // cout << size << endl;
    int i = 0;
    int max_third;
    map<int, int> m;
    int cnt = 1;
    auto maxNum = m.end();
    // if (size == 1)
    // {
    //     return nums[i];
    // }
    // else if (size == 2)
    // {
    //     return max(nums[i], nums[i + 1]);
    // }

    // else if (size >= 3)
    // {
    //     sort(nums.begin(), nums.end(), greater<int>());
    //     max_third = nums[i + 2];
    //     // cout << max_third << endl;
    //     return max_third;
    // }
    // for (auto i : nums)
    // {
    //     cout << i << " ";
    // }
    // return max_third;
    // sort(nums.begin(), nums.end(), greater<int>());
    for (int i = 0; i < size; ++i)
    {
        m[nums[i]]++;
    }

    if (m.size() == 1)
    {
        maxNum--;
        return maxNum->first;
    }
    else if (m.size() == 2)
    {
        maxNum--;
        return maxNum->first;
    }
    while (cnt <= 3)
    {
        maxNum--;
        if (cnt == 3)
        {
            max_third = maxNum->first;
        }
        cnt++;
    }
    cout << "MAX : " << max_third << endl;
}
int main()
{
    vector<int> num = {14};
    // sort(num.begin(), num.end(), greater<int>());
    for (auto i : num)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << thirdMax(num);
    // thirdMax(num);
    return 0;
}