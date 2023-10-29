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

vector<int> largestValues(TreeNode *root)
{
    if (root == NULL)
    {
        return {};
    }
    vector<int> ans;
    priority_queue<int> pq;
    queue<TreeNode *> q;

    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode *node = q.front();
            q.pop();

            if (node == NULL)
            {
                continue;
            }
            pq.push(node->val);
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        ans.push_back(pq.top());
        while (!pq.empty())
        {
            pq.pop();
        }
    }
    return ans;
}
int main()
{

    return 0;
}