// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{

    unordered_map<char, int> m;
    int n = s.size();
    int maxLength = INT_MIN;
    int left = 0;
    for (int i = 0; i < n; ++i)
    {
        if (m.find(s[i]) != m.end())
        {
            left = max(left, m[s[i]]++);
        }
        m[s[i]] = i;

        maxLength = max(maxLength, i - left);
    }
    return maxLength;
}

int lengthOfLongestSubstring1(string s)
{
    // two pointer approach with unordered_set
    unordered_set<char> us;

    int n = s.length();
    int maxLength = INT_MIN;
    int i = 0;

    // handel empty string and single char
    if (n == 0 || n == 1)
    {
        maxLength = n;
        return maxLength;
    }

    for (int j = 0; j < n; j++)
    {
        char ch = s[j];
        while (us.count(ch) > 0)
        {
            us.erase(s[i]);
            i++;
        }
        us.insert(ch);

        int windowLength = j - i + 1;
        maxLength = max(maxLength, windowLength);
    }
    return maxLength;
}
int main()
{
    // string s = "pwwkew";
    string s = "";
    // cout << lengthOfLongestSubstring(s) << endl;
    cout << lengthOfLongestSubstring1(s) << endl;

    return 0;
}