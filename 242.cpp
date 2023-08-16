// https://leetcode.com/problems/valid-anagram/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "anagram";
    string t = "nagaram";

    int res = isAnagram(s, t);

    if (res == 1)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}