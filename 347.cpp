#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/top-k-frequent-elements/
//  TC: O(N^2)
vector<int> topKFrequentNlogN(vector<int> &nums, int k)
{
    map<int, int> m; // log N
    vector<int> ans;
    for (auto elm : nums)
    {
        m[elm]++;
    }
    vector<pair<int, int>> vp(m.begin(), m.end());
    sort(vp.begin(), vp.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; }); // function as comperator
    for (int i = 0; i < k && i < vp.size(); i++)
    {
        ans.push_back(vp[i].first);
    }
    return ans;
}

//===============================
vector<int> topKFrequentN(vector<int> &nums, int k)
{
    unordered_map<int, int> m;

    for (auto elm : nums)
    {
        m[elm]++;
    }
    vector<vector<int>> bucket(nums.size() + 1); // bucket of vectors
    for (auto &pair : m)
    {
        int num = pair.first;
        int freq = pair.second;
        bucket[freq].push_back(num);
    }
    vector<int> ans;
    // traverse reversly
    for (int i = bucket.size() - 1; i >= 0 && ans.size() < k; i--)
    { // //   0  1    2       3
        // [[ ],[],[2,3,4],[-1,2]]
        // index matlab element ki frequency hai,and same frequency ke element bhi rah sakte hai,so we are using vector of vectors
        for (auto num : bucket[i])
        {
            ans.push_back(num);
            if (ans.size() == k)
            {
                break;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 1, -1, 2, -1, 2, 3}; // -1 2
    // 4,1,-1,2,-1,2,3
    int k = 2;
    // vector<int> ans = topKFrequentNlogN(nums, k);
    vector<int> ans = topKFrequentN(nums, k);
    for (auto elm : ans)
    {
        cout << elm << " ";
    }

    return 0;
}