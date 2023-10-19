#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string finalString(string s)
{
    // string
    string word = s;
    string ans = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'i')
        {
            // word.replace(i, i + 1, "");
            // int start = 0;
            // int end = i;

            reverse(ans.begin(), ans.begin());
        }
        else
        {
            if (word[i] != 'i')
            {
                ans += word[i];
            }
        }
    }
    return ans;
}
int main()
{
    // string s = "string";
    string s = "poiinter";

    cout << finalString(s) << endl;

    return 0;
}