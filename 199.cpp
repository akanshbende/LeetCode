#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}
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
    vector<int> Solve(TreeNode *root, vector<int> &ans, int depth)
    {
        if (root == nullptr)
        {
            return;
        }

        if (depth == ans.size())
        {
            // If the current depth is equal to the size of the ans vector, it means we are visiting the rightmost node at this depth.
            ans.push_back(root->val);
        }

        // First, traverse the right subtree to ensure rightmost nodes are visited first.
        Solve(root->right, ans, depth + 1);
        Solve(root->left, ans, depth + 1);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        Solve(root, ans, 0);
        return ans;
    }
};