#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    auto x = log2(n);
    cout << x << endl;
    if (modf(x, &x) == 0)
    {
        return true;
    }
    return false;
}

// 2 4 8 16 32 64 128
int main()
{
    int n = 3;
    cout << isPowerOfTwo(n) << endl;
    // cout << (double)(log(536870912) / log(2));
    return 0;
}