// https://leetcode.com/problems/sort-list/submissions/
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

ListNode *sortList(ListNode *head)
{
    ListNode *temp = head;
    if (temp == NULL)
    {
        return temp;
    }

    vector<int> v;

    while (temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    sort(v.begin(), v.end());

    ListNode *curr = head;
    int i = 0;
    while (curr != NULL)
    {
        curr->val = v[i];
        i++;
        curr = curr->next;
    }
    return head;
}