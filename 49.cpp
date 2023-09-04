#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> result;

    unordered_map<string, vector<string>> mp;

    for (auto &str : strs)
    {
        string temp = str;              // store word in temp
        sort(temp.begin(), temp.end()); // stort that word
        mp[temp].push_back(str);        // for sorted temp is temp are same push corresponding origial string in value vector of string
    }

    for (auto ans : mp)
    {
        result.push_back(ans.second);
    }

    return result;
}
int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(strs);

    cout << "[";
    for (auto a : ans)
    {
        cout << "[ ";
        for (auto i : a)
        {
            cout << i << ",";
        }
        cout << "],";
    }
    cout << "]";
    return 0;
}