#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rob(vector<int> &nums)
{
    int size = nums.size();
    if (size == 0)
    {
        return 0;
    }
    int i = 0;
    int j = 0;
    for (int num : nums)
    {
        int tmp = i;
        i = max(j + num, i);
        j = tmp;
    }
    return i;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1};

    cout << "Output : " << rob(nums) << endl;

    return 0;
}