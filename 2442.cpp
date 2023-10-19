#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDistinctIntegers(vector<int> &nums)
{
    unordered_set<int> s; // store distinct elements
    int revDigit = 0;
    for (auto &i : nums)
    {
        s.insert(i);
        revDigit = 0;
        // reverse i
        while (i)
        {
            int rem = i % 10;
            revDigit = (revDigit * 10 + rem);
            i /= 10;
        }
        s.insert(revDigit);
    }
    return s.size();
}

int main()
{
    vector<int> nums = {1, 13, 10, 12, 31};
    int n = nums.size();
    // vector<int> res;

    // int num = 12;
    // cout << reverseNum(num) << endl;
    cout << countDistinctIntegers(nums) << endl;
    // cout << countDistinctIntegers(nums);

    // for (auto num : res)
    // {
    //     cout << num << " ";
    // }

    return 0;
}