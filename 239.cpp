#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> max_of_subarrays(vector<int> arr, int k)
{
    // dequeue:
    // A deque, short for "double-ended queue," is a data structure that allows insertion and deletion of elements from both the front and the back ends with constant time complexity (amortized O(1)). It combines the properties of both a stack and a queue, making it a versatile data structure for various applications.
    deque<int> q;
    int i = 0, j = 0;
    int size = arr.size();
    vector<int> res;
    while (j < size)
    {
        // vector<int> v = {1, 3, 1, 2, 0, 5};
        // pahile ka jo element hai vo abhi ke element se bada hai kya? hai to pahile ke element ko pop_back kro.
        while (!q.empty() && q.back() < arr[j])
        {
            q.pop_back();
        }

        q.push_back(arr[j]);
        // vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            res.push_back(q.front());

            if (q.front() == arr[i])
                q.pop_front();
            i++;
            j++;
        }
    }
    return res;
}
int main()
{
    // vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};
    // vector<int> v = {3, 2, 1, 5};
    // vector<int> v = {1, -1};
    vector<int> v = {1, 3, 1, 2, 0, 5};
    int k = 3;

    vector<int> ans = max_of_subarrays(v, k);
    for (auto a : ans)
    {
        cout << a << " ";
    }

    return 0;
}