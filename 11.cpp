// https://leetcode.com/submissions/detail/1016250431/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max_area = 0;
        int array_size = height.size();

        int left = 0;
        int right = array_size - 1;

        while (left < right)
        {
            int area = min(height[left], height[right]) * (right - left);
            max_area = max(max_area, area);

            if (height[left] > height[right])
            {
                right--;
            }
            else if (height[left] <= height[right])
            {
                left++;
            }
        }

        return max_area;
    }
};