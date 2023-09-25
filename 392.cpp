#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int indx = 0;

    for (int i = 0; i < t.length(); i++)
    {
        if (s[indx] == t[i])
        {
            indx++;
        }
    }
    return indx == s.length();
}
int main()
{
    string s = "abc";
    string t = "ahbgdc";

    cout << isSubsequence(s, t) << endl;

    return 0;
}