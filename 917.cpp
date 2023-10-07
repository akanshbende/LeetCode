#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseOnlyLetters(string s)
{
    string res = "";
    for (auto ch : s)
    {
        char chr = ch;
        int ans = isalpha(chr);
        if (ans == 2)
        {
            ans += ch;
        }
        else
        {

            reverse(res.begin(), res.end());
        }
    }
    return res;
}
int main()
{
    string s = "ab-cd";
    cout << reverseOnlyLetters(s) << endl;

       return 0;
}