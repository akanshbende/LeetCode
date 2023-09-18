#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
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
    // ListNode* Solve(ListNode* l1, ListNode* l2){

    // }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *new_List = new ListNode();
        ListNode *temp = new_List;

        int carry = 0;
        int digit;
        while (l1 || l2 || carry)
        {
            int sum = 0;
            if (l1)
            {
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum = sum + l2->val;
                l2 = l2->next;
            }
            sum = sum + carry;
            carry = sum / 10;
            digit = sum % 10;

            temp->next = new ListNode(digit);
            temp = temp->next;
        }
        return new_List->next;
    }
};
int main()
{

    return 0;
}