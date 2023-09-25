// https://leetcode.com/problems/roman-to-integer/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int integerValue(char ch)
{
    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    if (ch == 'M')
        return 1000;

    return -1;
}
int romanToInteger(string &str)
{
    int result = 0;

    for (int i = 0; i < str.length(); i++)
    {
        int s1 = integerValue(str[i]);

        if (i + 1 < str.length())
        {
            int s2 = integerValue(str[i + 1]);
            if (s1 >= s2)
            {
                // VI
                result = result + s1;
            }
            else
            {
                // IV
                result = result + s2 - s1;
                i++;
            }
        }
        else
        {
            result = result + s1;
        }
    }
    return result;
}
int romanToInt(string s)
{
    return romanToInteger(s);
}

int main()
{
    string str = "CD";
    cout << romanToInt(str) << endl;

    return 0;
}

//  if(s[i]=='C' && (s[i+1]=='M' || s[i+1]=='D')){
//         sum-=100;
//     }
//    else if(s[i]=='M'){
//         sum+=1000;
//     }
//     else if(s[i]=='D'){
//         sum+=500;
//     }
//     else if(s[i]=='C'){
//         sum+=100;
//     }
//     else if(s[i]=='L'){
//         sum+=50;
//     }
//      else if(s[i]=='X' && s[i+1]=='L' && s[i+1]=='C'){
//         sum-=10;
//     }
//      else if(s[i]=='X' && s[i-1]=='I'){
//         sum+=9;
//     }
//     else if(s[i]=='X' && s[i+1]=='I'){
//         sum+=1;
//     }
//      else if(s[i]=='X'){
//         sum+=10;
//     }
//     else if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
//         sum+=1;
//     }
//     else if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
//         sum+=-1;
//     }
//     else if(s[i]=='I'){
//         sum+=1;
//     }

//       else if(s[i]=='V'){
//         sum+=5;
//     }