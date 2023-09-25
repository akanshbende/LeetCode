#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string commonPrefixUtil(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();

    for (int i = 0, j = 0; i <= n1 - 1 && j <= n2 - 1; i++, j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }
    return (result);
}
string commonPrefix(vector<string> &strs, int low, int high)
{
    string ans;
    if (low == high)
        ans = (strs[low]);

    if (high > low)
    {

        int mid = low + (high - low) / 2;

        string str1 = commonPrefix(strs, low, mid);
        string str2 = commonPrefix(strs, mid + 1, high);

        ans = (commonPrefixUtil(str1, str2));
    }
    return ans;
}

string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    string ans = commonPrefix(strs, 0, n - 1);
    return ans;
}
int main()
{

    vector<string> s = {"geeksforgeeks", "geeks",
                        "geek", "geezer"};
    int n = s.size();

    string ans = commonPrefix(s, 0, n - 1);

    if (ans.length())
        cout << "The longest common prefix is : "
             << ans;
    else
        cout << "There is no common prefix";

    return 0;
}