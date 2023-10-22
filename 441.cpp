#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 441. Arranging Coins
// https://leetcode.com/problems/arranging-coins/description/
int arrangeCoins(int n)
{
    long long row = 0;
    long long Coins = n;

    while (row <= Coins)
    {
        long long m = (row + Coins) / 2;
        if ((m * (m + 1)) / 2 > n)
        {
            Coins = m - 1;
        }
        else
        {
            row = m + 1;
        }
    }
    return (int)row - 1;
}
int main()
{
    int n = 5;
    cout << "Inomplete row : " << arrangeCoins(n) << endl;

    return 0;
}