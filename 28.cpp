#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
    // String find is used to find the first occurrence of a sub-string in the specified string being called upon. It returns the index of the first occurrence of the substring in the string from the given starting position. The default value of starting position is 0.
    return haystack.find(needle);
}
int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";

    cout << strStr(haystack, needle);

    return 0;
}