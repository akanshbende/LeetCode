#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abcdefghijkl";
    int k = 8;
    char fill = 'x';
    cout << string(5, fill) << endl; // gives n no. of characters
    // sol
    int i = 0;
    int j = 0;
    vector<string> ans;
    int size = s.length();
    string str = "";

    while (j < size)
    {

        str.push_back(s[j]);

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            ans.push_back(str);
            str = "";
            j++;
            i = j;
        }
    }

    if (!str.empty())
    {
        if (str.size() < k)
        {
            str += string(k - str.size(), fill);
        }
        ans.push_back(str);
    }

    cout << "Answer :";
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << string(5, fill) << endl; // gives n no. of chars
    return 0;
}