#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reversePrefix(string word, char ch)
{
    reverse(word.begin(), word.begin() + word.find(ch) + 1);
    return word;
}
int main()
{
    string word = "abcdefd";
    char ch = 'd';
    cout << reversePrefix(word, ch);

    return 0;
}