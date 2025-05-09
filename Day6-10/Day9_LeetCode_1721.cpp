class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
            ListNode* left = head;
            ListNode* right = head;
    
            for (int i = 1; i < k; i++) {
                left = left->next;
            }
    
            ListNode* curr = left;
            while (curr->next) {
                curr = curr->next;
                right = right->next;
            }
    
            swap(left->val, right->val);
            return head;
        }
    };