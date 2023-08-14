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