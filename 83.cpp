struct ListNode
{
    int val;
    ListNode *next;
};
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        // list is empty
        if (head == NULL)
        {
            return head;
        }
        // non-empty list
        ListNode *curr = head;
        while (curr != NULL)
        {
            // equal
            if ((curr->next != NULL) && (curr->val == curr->next->val))
            {
                // storing the addresses to retain the address of nodes
                ListNode *next_next = curr->next->next;
                ListNode *nodeToDelete = curr->next;
                delete nodeToDelete;
                curr->next = next_next;
            }
            else
            {
                // if not duplicate move fordward
                curr = curr->next;
            }
        }
        return head;
    }
};