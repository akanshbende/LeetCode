#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// TWO POINTER APPROACH
string reverseOnlyLetters(string s)
{
    // string ans="";
    // for(auto ch:s){
    //     if(ch)
    // }
    int i = 0;
    int j = s.length();
    while (i <= j)
    {
        bool start = isalpha(s[i]);
        bool end = isalpha(s[j]);
        if (start && end)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (!start)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return s;
}
int main()
{
    string s = "ab-cd";
    cout << reverseOnlyLetters(s) << endl;

    return 0;
}