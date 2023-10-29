#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // already sorted O(N)
            // worst case : O(N^2)
            break;
        }
    }
}
int main()
{

    vector<int> v = {10, 3, 6, 32, 5, 2, 4, 8};
    int n = v.size();
    bubbleSort(v, n);
    for (auto e : v)
    {
        cout << e << " ";
    }
    return 0;
}