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
int main()
{
    vector<int> v = {5, 2, 3, 1};
    vector<int> ans = sortArray(v);

    for (auto num : ans)
    {
        cout << num << " ";
    }

    return 0;
}