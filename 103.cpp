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

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> result;
    if (root == NULL)
    {
        return result;
    }
    queue<TreeNode *> q;
    q.push(root);

    bool leftToRight = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        // level Process
        for (int i = 0; i < size; ++i)
        {
            TreeNode *frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->val;

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }
        // change directioon
        leftToRight = !leftToRight;

        // for(auto i:ans){
        //     result.push_back(i);
        // }
        result.push_back(ans);
        vector<int> ans1;
        ans = ans1;
    }
    return result;
}
int main()
{

    return 0;
}