
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
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return root;
        }

        // swap
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;

        // recursively do same for others
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};