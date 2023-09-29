#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int> &nums)
{
    int n = nums.size();
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            decreasing = false;
        }
        else if (nums[i] < nums[i - 1])
        {
            increasing = false;
        }
    }
    return increasing || decreasing;
}
int main()
{
    vector<int> v = {1, 2, 2, 3};
    string ans = isMonotonic(v) ? "True" : "False";
    cout << ans << endl;

    return 0;
}