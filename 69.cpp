
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{

    if (x == 0 || x == 1)
        return x;

    int start = 1;
    int end = x;
    int mid = -1;

    // Perform binary search to find the square root of x.
    while (start <= end)
    {
        // Calculate the middle point
        mid = start + (end - start) / 2;

        // If the square of the middle value is greater than x, move the "end" to the left (mid - 1).
        if ((long)mid * mid > (long)x)
            end = mid - 1;
        else if (mid * mid == x)
            // If the square of the middle value is equal to x, we found the square root.
            return mid;
        else
            // If the square of the middle value is less than x, move the "start" to the right (mid + 1).
            start = mid + 1;
    }
    // The loop ends when "start" becomes greater than "end", and "end" is the integer value of the square root.
    // However, since we might have been using integer division in the calculations,
    // we round down the value of "end" to the nearest integer to get the correct square root.
    // int ans =int(end);
    return int(end);
}

int main()
{
    int x = 4;
    cout << "SQRT :" << mySqrt(4) << endl;
    return 0;
}