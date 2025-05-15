/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* slist = new ListNode();
        ListNode* sptr = slist;
        ListNode* blist = new ListNode();
        ListNode* bptr = blist;

        ListNode* ptr = head;

        while (ptr) {
            if (ptr->val < x) {
                sptr->next = new ListNode(ptr->val);
                sptr = sptr->next;
            } else {
                bptr->next = new ListNode(ptr->val);
                bptr = bptr->next;
            }
            ptr = ptr->next;
        }

        sptr->next=blist->next;

        return slist->next;
    }
};