#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    vector<float> v;
    for (auto val : nums1)
    {
        v.push_back(val);
    }
    for (auto val_1 : nums2)
    {
        v.push_back(val_1);
    }

    sort(v.begin(), v.end());

    int n = v.size();
    // cout << n << endl;
    float median;
    if (n % 2 == 0)
    {
        int m1 = n / 2;
        // cout << m1 << endl;
        int m2 = (n / 2) - 1;
        // cout << m2 << endl;
        cout << v[m2] << v[m1] << endl;

        float median = ((v[m2] + v[m1]) / 2);
        cout << median << endl;
    }
    else
    {
        int mid = n / 2;
        float median = v[mid];
        cout << median << endl;
    }

    return 0;
}