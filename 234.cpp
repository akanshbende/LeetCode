// https://leetcode.com/problems/palindrome-linked-list/

// Definition for singly-linked list.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *temp = head;
        vector<int> v;
        bool flag = true;
        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        int i = 0;
        int j = n - 1;

        while (i <= j)
        {
            if (v[i] == v[j])
            {
                i++;
                j--;
            }
            else
            {
                flag = 0;
                return flag;
            }
        }
        return flag;
    }
};