#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// left array me largest building and right arrayme largest building dekhna padta hai...
// No nearest Element to Left & No nearest Element to Right concept used
//-------------Approach-------------
// calculate greatest element to left array and also of right array for taht particular element and then find minimum of both, then substract height of building.
// then sum all answers and fnally we get tapped water!!!

int RainWaterTaping(vector<int> &heights)
{
    int size = heights.size();
    vector<int> maxL(size);
    vector<int> maxR(size);
    maxL[0] = heights[0];
    //--------------------MAXL----------------------
    //   ---->
    //         3, 0, 0, 2, 0, 4
    //         | /  /  /  /  / |
    // maxL[i]  3  3  3  3  3  4
    for (int i = 1; i < size; i++)
    {
        maxL[i] = max(maxL[i - 1], heights[i]);
    }

    //--------------------MAXR----------------------
    //                                           <---
    //                           3, 0, 0, 2, 0, 4
    // max(maxR[i+1], heights[i]) | \  \  \  \  \ |
    // maxL[i]                   4  4  4  4  4  4
    maxR[size - 1] = heights[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        maxR[i] = max(maxR[i + 1], heights[i]);
    }

    // Water Collected
    vector<int> water(size);
    for (int i = 0; i < size; ++i)
    {
        water[i] = min(maxL[i], maxR[i]) - heights[i];
    }

    int sum = 0;

    for (int i = 0; i < size; ++i)
    {
        sum += water[i];
    }

    return sum;
}
int main()
{
    vector<int> heights = {3, 0, 0, 2, 0, 4};

    cout << "Max Water : " << RainWaterTaping(heights) << endl;

    return 0;
}