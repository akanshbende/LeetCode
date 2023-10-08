#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 257. Binary Tree Paths
// https://leetcode.com/problems/binary-tree-paths/description/
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
    void Solve(TreeNode *root, string path, vector<string> &ans)
    {
        // logic
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            path += to_string(root->val);
            ans.push_back(path);
            return;
        }
        path += to_string(root->val) + "->";
        Solve(root->left, path, ans);
        Solve(root->right, path, ans);
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ans;
        string path = "";
        Solve(root, path, ans);
        return ans;
    }
};
int main()
{

    return 0;
}