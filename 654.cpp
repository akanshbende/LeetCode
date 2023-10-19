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
    TreeNode *Solve(vector<int> &nums, int start, int end)
    {
        if (start > end)
            return NULL;

        int maxIndex = start;
        for (int i = start + 1; i <= end; i++)
        { // Change the condition here
            if (nums[i] > nums[maxIndex])
            {
                maxIndex = i;
            }
        }
        TreeNode *root = new TreeNode(nums[maxIndex]);

        root->left = Solve(nums, start, maxIndex - 1);
        root->right = Solve(nums, maxIndex + 1, end);

        return root;
    }

    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        int n = nums.size() - 1;
        return Solve(nums, 0, n);
    }
};