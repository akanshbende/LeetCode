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

void Traverse(TreeNode *root, int sum, int targetSum, bool &flag)
{
    if (root == NULL)
    {
        return;
    }
    sum += root->val;
    // path root to leaf hona.middle tak nhi chalega

    if (root->left == NULL && root->right == NULL && sum == targetSum)
    {
        flag = true;
        return;
    }
    Traverse(root->left, sum, targetSum, flag);
    Traverse(root->right, sum, targetSum, flag);
}

bool hasPathSum(TreeNode *root, int targetSum)
{
    int sum = 0;
    bool flag = false;
    Traverse(root, sum, targetSum, flag);
    return flag;
}
int main()
{

    return 0;
}