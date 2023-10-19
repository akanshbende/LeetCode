#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
string firstPalindrome(vector<string> &words)
{
    string ans;
    for (int i = 0; i < words.size(); i++)
    {
        if (isPalindrome(words[i]))
        {
            ans = words[i];
            break;
        }
    }
    return ans;
}
int main()
{
    // string s = "aba";
    // string ans = isPalindrome(s) ? "TRUE" : "FALSE";
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
    string ans = firstPalindrome(words);
    cout << ans << endl;

    return 0;
}