#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string smallestSubsequence(string s)
{
    int n = s.length();
    vector<int> lastIndex(26, -1);   // Store the last index of each character
    vector<bool> inStack(26, false); // Track characters in the stack
    stack<char> st;                  // Stack to build the result

    for (int i = 0; i < n; i++)
    {
        lastIndex[s[i] - 'a'] = i;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        int idx = ch - 'a';

        if (inStack[idx])
        {
            continue;
        }

        // While the stack is not empty, and the current character is smaller
        // than the top of the stack, and there are more occurrences of the top
        // character later in the string, pop the character from the stack.
        while (!st.empty() && ch < st.top() && lastIndex[st.top() - 'a'] > i)
        {
            inStack[st.top() - 'a'] = false;
            st.pop();
        }

        // Push the current character onto the stack and mark it as in the stack.
        st.push(ch);
        inStack[idx] = true;
    }

    // Build the result string from the stack.
    string result;
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    // Reverse the result to get the correct order.
    reverse(result.begin(), result.end());

    return result;
}
int main()
{
    string s = "bcabc";
    cout << smallestSubsequence(s) << endl;

    return 0;
}