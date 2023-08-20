// https : // leetcode.com/problems/peak-index-in-a-mountain-array/description/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int size = arr.size();
    int j = 0;

    int maxH = INT_MIN;
    while (j < size)
    {
        if (arr[j] > arr[j + 1])
        {
            maxH = j;
            break;
        }
        j++;
    }
    return maxH;
}
int main()
{
    vector<int> arr = {2, 3, 7, 3, 4};
    cout << "Peak :" << peakIndexInMountainArray(arr) << endl;

    return 0;
}