#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int j = 0;
    char ans;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[j] != t[i])
        {
            ans = t[i];
        }
        else
            j++;
    }
    return ans;
}
int main()
{
    string s = "abcd";
    string t = "abcde";

    cout << findTheDifference(s, t);

    return 0;
}