#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 844. Backspace String Compare
bool backspaceCompare(string s, string t)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#')
        {
            if (i > 0)
            {
                s.erase(i, 1);     // Remove the backspace
                s.erase(i - 1, 1); // Remove the character before the backspace
                i -= 2;            // Move the loop counter back by 2 to account for the removed characters
            }
            else
            {
                s.erase(i, 1); // Remove just the backspace if it's at the beginning of the string
                i--;           // Move the loop counter back by 1
            }
        }
    }

    for (int j = 0; j < t.length(); j++)
    {
        if (t[j] == '#')
        {
            if (j > 0)
            {
                t.erase(j, 1);
                t.erase(j - 1, 1);
                j -= 2;
            }
            else
            {
                t.erase(j, 1);
                j--;
            }
        }
    }

    return s == t;
}
int main()
{
    string s = "ab#c";
    string t = "ad#c";
    cout << backspaceCompare(s, t);

    return 0;
}