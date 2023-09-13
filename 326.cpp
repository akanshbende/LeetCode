#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n <= 0)
    {
        return false;
    }
    double x = log10(n) / log10(3);
    int y = x;
    if (x - y == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n = 23;

    cout << isPowerOfThree(n) << endl;
    cout << log10(5);
    return 0;
}
