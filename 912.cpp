#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int> &nums)
{
    multiset<int> m;
    vector<int> v(nums.size());
    for (auto num : nums)
    {
        m.insert(num);
    }

    auto itr = m.begin();

    for (int i = 0; i < nums.size(); ++i)
    {
        int num = *itr;
        v[i] = num;
        itr++;
    }

    return v;
}

vector<int> sortArrayByPriorityQueue(vector<int> &nums)
{
    int n = nums.size();
    priority_queue<int> pq;

    for (auto num : nums)
    {
        pq.push(num);
    }
    for (int i = n - 1; i >= 0; --i)
    {
        nums[i] = pq.top();
        pq.pop();
    }
    return nums;
}

int main()
{
    vector<int> v = {5, 2, 3, 1};
    vector<int> ans = sortArrayByPriorityQueue(v);

    for (auto num : ans)
    {
        cout << num << " ";
    }

    return 0;
}