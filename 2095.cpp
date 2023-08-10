// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/

class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        // for 1 node
        if ((head == NULL) || (head->next == NULL))
        {
            ListNode *nodeToDelete = head;
            delete nodeToDelete;
            head = NULL;
            return head;
        }
        // for 2 node
        if ((head->next->next) == NULL)
        {
            ListNode *nodeToDelete = head->next;
            head->next = NULL;
            delete nodeToDelete;
            return head;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;
        ListNode *prev = NULL;
        ListNode *nodeToDelete = NULL;

        while (fast != NULL)
        {

            fast = fast->next;
            if (fast != NULL && fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        delete nodeToDelete;
        return head;
    }
};

// Another solution
ListNode *getList(ListNode *head)
    ListNode *slow = head;
ListNode *fast = head;
ListNode *prev = nullptr;
while (fast && fast—next)
    = slow;
prev
    slow = slow—next;
fast = fast—next—next;
if (prev nullptr)
    head = nullptr;
return = slow—next;
prev + next delete slow;
return head;