#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
    int breadthFirstTraversal(TreeNode *root)
    {
        queue<TreeNode *> q;
        int depth = 1;

        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            TreeNode *temp = root;
            q.pop();

            if (temp == NULL)
            {
                depth++;
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        return depth;
    }
};
// int maxDepth(TreeNode *root)
// {
//     int ans = breadthFirstTraversal(root);
// }
int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return max(maxLeft, maxRight) + 1;
}

int main()
{

    return 0;
}