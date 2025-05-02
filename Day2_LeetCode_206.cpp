class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr; 
        ListNode* curr = head;
        ListNode* nextptr;
        
        while(curr!=nullptr){
            nextptr = curr->next;
            curr->next = prev;

            prev = curr;
            curr = nextptr;

        }
        return prev;
    }
};
