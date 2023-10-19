#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int integerBreak(int n)
{
    if (n <= 2)
    {
        return 1;
    }

    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            // Calculate the maximum product when breaking i into j and i-j.
            dp[i] = max(dp[i], max(j, dp[j]) * max(i - j, dp[i - j]));
        }
    }

    return dp[n];
}
int main()
{
    int n = 40;
    cout << "MAX PRODUCT :" << integerBreak(n) << endl;
    return 0;
}