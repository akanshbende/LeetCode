#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 7, 7, 8, 8, 10};
    vector<int> ans;
    int target = 8;
    int size = v.size();
    int i = 0;

    while (i < size)
    {
        if (v[i] == target)
        {
            ans.push_back(i);
            i++;
        }
    }

    for (auto a : ans)
    {
        cout << a << " " << endl;
    }

    return 0;
}