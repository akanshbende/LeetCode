
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    // ListNode() : val(0), next(nullptr) {}
    // ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        int cnt = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }

        ListNode *curr = head;
        ListNode *prev = NULL;
        int num = cnt - n;
        if (num == 0)
        { // If the node to remove is the head
            ListNode *newHead = head->next;
            delete head;
            return newHead;
        }

        while (num > 0)
        {
            prev = curr;
            curr = curr->next;
            num--;
        }
        ListNode *NodeTodelete = curr;
        prev->next = NodeTodelete->next;
        delete NodeTodelete;
        return head;
    }
};