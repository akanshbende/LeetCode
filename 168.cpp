// https : // leetcode.com/problems/excel-sheet-column-title/description/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string convertToTitle(int columnNumber)
{
    string result;

    while (columnNumber > 0)
    {
        int remainder = (columnNumber - 1) % 26; // Get the remainder for the current digit
        result = char('A' + remainder) + result; // Convert to corresponding character and prepend to result
        columnNumber = (columnNumber - 1) / 26;  // Move to the next digit
    }
    return result;
}
int main()
{
    int columnNumber = 45;
    cout << "Column Name : " << convertToTitle(columnNumber) << endl;

    // cout << char('A' + 1) << endl;
    // int remainder = 1 % 26;
    // cout << remainder << endl;

    return 0;
}