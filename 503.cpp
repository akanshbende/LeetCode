// https://leetcode.com/problems/next-greater-element-ii/description/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// https://leetcode.com/problems/next-greater-element-ii/solutions/98270/JavaC++Python-Loop-Twice/comments/335669
vector<int> CyclicNextGreater(vector<int> nums)
{
    int n = nums.size();
    cout << "n :" << n << endl;
    stack<int> s;
    vector<int> ans(n, -1);
    int cnt = 0;
    // vector<int> nums = {2, 10, 12, 1, 11};
    // 0  1   2  3  4
    for (int i = 2 * n - 1; i >= 0; --i) // 2*n-1
    {
        int num = nums[i % n];

        while (!s.empty() && s.top() <= num)
        {
            cnt++;
            s.pop();
        }
        if (!s.empty())
        {
            ans[i % n] = s.top();
        }

        s.push(nums[i % n]);
    }
    cout << "WHILE CNT : " << cnt << endl;
    return ans;
}

vector<int> SimpleNextGreater(vector<int> nums)
{
    int n = nums.size();
    cout << "n :" << n << endl;
    stack<int> s;
    vector<int> ans(n, -1);
    int cnt = 0;
    for (int i = n - 1; i >= 0; --i) // n-1
    {
        int num = nums[i % n];
        // CODE for First half simple NGE
        while (!s.empty() && s.top() <= num)
        {
            cnt++;
            s.pop();
        }

        if (!s.empty())
        {
            ans[i % n] = s.top();
        }

        s.push(nums[i % n]);
    }
    cout << "WHILE CNT : " << cnt << endl;
    return ans;
}

int main()
{
    vector<int> nums = {2, 10, 12, 1, 11};
    // vector<int> result = CyclicNextGreater(nums);
    vector<int> result = CyclicNextGreater(nums);
    vector<int> resultSimp = SimpleNextGreater(nums);

    cout << "Cyclic Next Greater Elements: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Simple Next Greater Elements: ";
    for (int num : resultSimp)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}