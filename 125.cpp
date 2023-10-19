#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    string str1 = "";
    // Remove spaces and non-alphanumeric characters and convert to lowercase
    for (int i = 0; i < s.length(); i++)
    {
        if (isalnum(s[i]))
        {
            str1 += tolower(s[i]);
        }
    }

    // Check if str1 is a palindrome
    int left = 0;
    int right = str1.length() - 1;
    while (left < right)
    {
        if (str1[left] != str1[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);

    return 0;
}