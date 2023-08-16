#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int maxNumberOfBalloons(string text)
{
    string word = "balloon";
    int wordCount = 0;
    int textWordCount = 0;
    int wordSize = word.size();
    int textSize = text.size();
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    for (int i = 0; i < wordSize; ++i)
    {
        m1[word[i]]++;
        wordCount++;
    }

    cout << "wordCount : " << wordCount << endl;

    for (int i = 0; i < textSize; ++i)
    {
        if (m1.find(word[i]) != m1.end())
        {
            if (m1[word[i]] == text[i])
            {
                textWordCount++;
            }
        }
        wordCount++;
    }

    cout << "textWordCount : " << textWordCount << endl;
    int ans = textWordCount / wordCount;
    cout << "ans : " << ans << endl;
    return ans;
}
int main()
{

    // string text = "nlaebolko";
    string text = "nlaebolko";
    cout << "Occurrence : " << maxNumberOfBalloons(text) << endl;
    return 0;
}