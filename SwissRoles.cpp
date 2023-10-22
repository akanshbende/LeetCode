#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rolls = 2, sponsors = 5;
    std::cin >> rolls >> sponsors;

    int cuts = 0;

    if (rolls >= sponsors)
    {
        cuts = (rolls % sponsors == 0) ? 0 : 1;
        cuts += rolls / sponsors;
    }
    else
    {
        cuts = rolls;
    }

    std::cout << cuts << std::endl;

    return 0;
}