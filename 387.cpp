#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> m;
    for (auto ch : s)
    {
        m[ch]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]] == 1)
        {
            return i; // Found the first non-repeating character
        }
    }

    return -1; // If no non-repeating character is found, return -1
}

int main()
{
    string s = "leetcode";
    cout << firstUniqChar(s);
    return 0;
}