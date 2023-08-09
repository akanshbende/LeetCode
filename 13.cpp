// https://leetcode.com/problems/roman-to-integer/

class Solution
{
public:
    int romanToInt(string s)
    {
        int n = s.length();
        int sum = 0;
        unordered_map<char, int> m{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        for (int i = 0; i < n; ++i)
        {
            if (m[s[i]] < m[s[i + 1]])
            {
                sum -= m[s[i]];
            }
            else
            {
                sum += m[s[i]];
            }
        }
        return sum;
    }
};

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