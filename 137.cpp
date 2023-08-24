// https://leetcode.com/problems/single-number-ii/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int size = nums.size();

    unordered_map<int, int> m;

    int oddNum;
    for (auto n : nums)
    {
        m[n]++;
    }

    auto itr = m.begin();

    while (itr != m.end())
    {
        if (itr->second < 3)
        {
            oddNum = itr->first;
        }
        itr++;
    }
    return oddNum;
}
int main()
{
    vector<int> v = {2, 2, 2, -1, -1, -1, 8, -7, 0, -7, 0, -7, 0};

    cout << "Number is : " << singleNumber(v);
    return 0;
}