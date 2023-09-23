#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s, int k)
{
    int len = s.length();
    int j = 0;
    string temp = "";
    string remain = "";
    string answ;
    for (int i = 0; i < len; i += 2 * k)
    {
        // reverse 1st k chars
        reverse(s.begin() + i, s.begin() + min(i + k, len));
        answ += s.substr(i, 2 * k);
    }
    return answ;
}
int main()
{
    string s = "abcdefg";
    int k = 2;
    cout << "Input : " << s << endl;
    cout << "Output : ";

    cout << reverseStr(s, k);

    return 0;
}