#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Dynamic Programming + Array 
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int maxProfit = 0;
    int minPrice = prices[0];

    for (int i = 1; i < n; ++i)
    {
        // 7, 1, 5, 3, 6, 4
        int potentialProfit = prices[i] - minPrice;

        // if potentialProfit is -ve then  maxProfit=0;
        maxProfit = max(maxProfit, potentialProfit);

        minPrice = min(minPrice, prices[i]);
    }
    return maxProfit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(prices);

    cout << "MAX PROFIT : " << ans << endl;
    return 0;
}