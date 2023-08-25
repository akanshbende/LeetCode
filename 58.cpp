#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    int n = s.length();
    // cout << n << endl;
    int i, j;
    i = n - 1;
    // j = i - 1;
    // int cnt=0;
    int len = 0;

    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    while (i >= 0 && s[i] != ' ')
    {
        len++;
        i--;
    }

    return len;
}
int main()
{
    string s = "   fly me   to   the moon  ";
    cout << "Length : " << lengthOfLastWord(s);

    return 0;
}