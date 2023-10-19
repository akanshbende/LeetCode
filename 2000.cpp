#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reversePrefix(string word, char ch)
{
    reverse(word.begin(), word.begin() + word.find(ch) + 1);
    return word;
}
string reversePrefixNaiveApproach(string word, char ch)
{
    int start = 0;
    int end = -1;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ch)
        {
            end = i;
            break;
        }
    }

    // if given element found then
    if (end != -1)
    {
        while (start <= end)
        {
            int temp = word[start];
            word[start] = word[end];
            word[end] = temp;

            // move fordward
            start++;
            end--;
        }
    }

    return word;
}
int main()
{
    string word = "abcdefd";
    char ch = 'd';
    // cout << reversePrefix(word, ch);
    cout << reversePrefixNaiveApproach(word, ch);

    return 0;
}