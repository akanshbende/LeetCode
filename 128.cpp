#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    priority_queue<int, vector<int>, greater<int>> pq; // for minimum first priority
    for (auto num : nums)
    {
        pq.push(num);
    }

    int cnt = 1;
    if (pq.empty())
    {
        cnt = 0;
    }
    while (!pq.empty())
    {
        int top = pq.top();
        pq.pop();
        cout << "top : " << top << endl;
        cout << "pq.top : " << pq.top() << endl;

        if (pq.top() - top == 1)
        {
            cnt++;
            cout << "Count : " << cnt << endl;
        }
        if (pq.top() - top == 0)
        {
            continue;
        }
        cout << endl;
    }
    return cnt;
}
int main()
{
    // vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    // vector<int> nums = {100, 4, 200, 1, 3, 2};
    vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
    // 0 0 1 2 3 4 5 6 7 8
    // -1 -1 0 1
    priority_queue<int, vector<int>, greater<int>> pq; // for minimum first priority
    // int cnt = 2;
    // for (auto num : nums)
    // {
    //     pq.push(num);
    // }
    // cout << "PQ : " << endl;
    // while (!pq.empty())
    // {
    //     cout << pq.top() << endl;
    //     pq.pop();
    // }
    sort(nums.begin(), nums.end());
    for (auto num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Answer : " << longestConsecutive(nums) << endl;

    return 0;
}