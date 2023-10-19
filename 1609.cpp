#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}
// 1609. Even Odd Tree
// https://leetcode.com/problems/even-odd-tree/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        // even level increasing order
        // odd level decreasing order
        //  bool evenLevel=true;
        //  bool oddLevel=true;
        bool incr = true;
        bool decr = true;

        if (root == NULL)
        {
            return true;
        }
        queue<TreeNode *> q;
        q.push(root);
        int level = 0;

        while (!q.empty())
        {
            int size = q.size();
            int prevVal = (level % 2 == 0) ? INT_MIN : INT_MAX;

            for (int i = 0; i < size; i++)
            {
                TreeNode *current = q.front();
                q.pop();

                // Check for even or odd levels and their corresponding conditions
                if ((level % 2 == 0 && (current->val % 2 == 0 || current->val <= prevVal)) ||
                    (level % 2 != 0 && (current->val % 2 != 0 || current->val >= prevVal)))
                {
                    return false;
                }

                prevVal = current->val;

                if (current->left)
                {
                    q.push(current->left);
                }
                if (current->right)
                {
                    q.push(current->right);
                }
            }

            level++;
        }

        return true;
    }
};