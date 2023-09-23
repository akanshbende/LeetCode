#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> temp;
        string str = "";
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == ' ')
            {
                reverse(str.begin(), str.end());
                temp.push_back(str);
                str = "";
            }
            else
            {
                str += s[i];
            }
        }
        reverse(str.begin(), str.end());
        temp.push_back(str);

        // reverse(temp.begin(), temp.end());
        int n = temp.size();
        string ans = "";
        for (int i = 0; i < n - 1; ++i)
        {
            ans += temp[i];
            ans += " ";
        }
        ans.append(temp[n - 1]);

        return ans;
    }
};
int main()
{

    return 0;
}