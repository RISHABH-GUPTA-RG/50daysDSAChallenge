
//  Definition for singly-linked list.
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        // Edge Case
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        // Calculating size of the linked list
        int len = 1;
        ListNode *Current = head;
        while (Current->next)
        {
            len++;
            Current = Current->next;
        }

        // Getting new tail position
        int rotatePlace = k % len;
        if (rotatePlace == 0)
        {
            return head;
        }

        // Making the linked list circular
        Current->next = head;

        // Breaking the node at proper position
        int newTailPos = len - rotatePlace;
        Current = head;
        for (int i = 1; i < newTailPos; i++)
        {
            Current = Current->next;
        }

        // Changing head position for final answer
        head = Current->next;
        Current->next = NULL;

        return head;
    }
};