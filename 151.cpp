#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> ans;
        string str = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                ans.push_back(str);
                str = "";
            }
            else
            {
                str += s[i];
            }
        }
        ans.push_back(str);

        reverse(ans.begin(), ans.end());
        string an = "";
        int n = ans.size();
        for (int i = 0; i < n - 1; i++)
        {
            an.append(ans[i]);
            an.append(" ");
        }
        an.append(ans[n - 1]);

        return an;
    }
};
int main()
{

    return 0;
}