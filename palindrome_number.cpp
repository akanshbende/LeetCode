#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 121;
    string s = to_string(x);
    int len = s.length();

    // cout << len << endl;
    vector<int> v;
    for (auto chr : s)
    {
        v.push_back(chr);
    }
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
    }

    // vector<int> r;

    // if (len % 2 != 0)
    // {
    //     int mid = len / 2;

    // }

    return 0;
}