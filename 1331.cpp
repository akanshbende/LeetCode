#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> arrayRankTransform(vector<int> &arr)
{
    set<int> rankSet;
    for (auto &elm : arr)
    {
        rankSet.insert(elm);
    }
    unordered_map<int, int> rankMap;
    int rank = 1;
    auto it = rankSet.begin();
    while (it != rankSet.end())
    {
        rankMap[*it] = rank++; // initially rank=1,assigned to 1st element
        it++;
    }
    for (int j = 0; j < arr.size(); j++)
    {
        arr[j] = rankMap[arr[j]];
    }

    return arr;
}
int main()
{
    vector<int> arr = {40, 10, 20, 30};
    // vector<int> arr = {100, 100, 100};
    // vector<int> arr = {37, 12, 28, 9, 100, 56, 80, 5, 12};
    vector<int> ans = arrayRankTransform(arr);
    cout << endl;
    cout << "[ ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << " ]";

    return 0;
}