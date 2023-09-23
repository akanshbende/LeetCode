#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    unordered_map<char, int> map;
    for (char ch : s)
        map[ch]++;

    priority_queue<pair<int, char>> pq;
    for (auto pair : map)
    {
        pq.push({pair.second, pair.first});
    }
    // time cmplexity : O(log N)

    string ans;
    pair<int, char> curr;
    while (!pq.empty())
    {
        curr = pq.top();
        pq.pop();
        ans.append(curr.first, curr.second); // append 2 tiems p
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string s = "apple";
    // pplea
    cout << frequencySort(s) << endl;
    string b = "";
    b.append(3, 'z');
    cout << b << endl;
    return 0;
}