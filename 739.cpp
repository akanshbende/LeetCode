// https://leetcode.com/problems/daily-temperatures/description/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> temperatures = {73,
                                74,
                                75,
                                71,
                                69,
                                72,
                                76,
                                73};
    // vector<int> temperatures = {30, 40, 50, 60};

    int size = temperatures.size();
    cout << size << endl;
    stack<int> st;
    vector<int>
        ans;
    int i = 0;
    int j = i + 1;
    int days = 0;

    cout << "Answer : ";
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

/*
while (j < size)
    {
        if (temperatures[i] < temperatures[j])
        {
            // int days = temperatures[j] - temperatures[i];
            days++;
            ans.push_back(days);
            days = 0;
            i = j;
            j++;
        }
        else if (temperatures[j] < temperatures[i])
        {
            days++;
            j++;
        }
    }
*/