#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}

// Definition for a Node.
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    void solve(Node *leftParent, Node *rightParent)
    {
        if (!leftParent && !rightParent)
        {
            return;
        }
        leftParent->next = rightParent;

        solve(leftParent->left, leftParent->right);
        solve(leftParent->right, rightParent->left);
        solve(rightParent->left, rightParent->right);

        // leftParent->next=rightParent;
    }
    Node *connect(Node *root)
    {
        if (root == NULL || (root->left == NULL && root->right == NULL))
        {
            return root;
        }
        solve(root->left, root->right);
        return root;
    }
};