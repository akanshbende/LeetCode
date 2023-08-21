#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s)
{
    int size = s.size();
    unordered_map<char, int> m;

    int cnt = 0;
    bool flag;
    for (int i = 0; i < size; ++i)
    {
        m[s[i]]++;
        cnt++;
    }

    int map_size = m.size();
    if (size == 1)
    {
        flag = false;
        return flag;
    }
    else if (cnt % map_size == 0)
    {
        flag = true;
        return flag;
    }
    else
    {
        flag = false;
        return flag;
    }
}
bool repeatedSubstringPattern2(string s)
{
    // int size = s.size();
    return (s + s).substr(1, 2 * s.size() - 2).find(s) != -1;
}
int main()
{
    string s = "aba";
    // bool ans = repeatedSubstringPattern(s);
    bool ans2 = repeatedSubstringPattern2(s);

    cout << "Answer : ";
    // if (ans == 1)
    // {
    //     cout << "True" << endl;
    // }
    // else if (ans == 0)
    // {
    //     cout << "False" << endl;
    // }
    if (ans2 == 1)
    {
        cout << "True" << endl;
    }
    else if (ans2 == 0)
    {
        cout << "False" << endl;
    }

    return 0;
}