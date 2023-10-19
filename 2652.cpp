#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 2652. Sum Multiples
// https://leetcode.com/problems/sum-multiples/
int sumOfMultiples(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int n = 9;
    cout << sumOfMultiples(n);

    return 0;
}