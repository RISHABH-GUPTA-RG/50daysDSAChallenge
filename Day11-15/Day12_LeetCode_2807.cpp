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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr)
            return head;
        int x = head->val;
        int y;

        ListNode* prev = head;
        ListNode* ptr = head->next;

        while (ptr) {
            int y = ptr->val;

            // cout<<gcd(x,y)<<" ";
            int value = gcd(x, y);
            // Inserting GCD
            ListNode* newNode = new ListNode(value, ptr);
            prev->next = newNode;
            prev = ptr;

            x = y;
            ptr = ptr->next;
        }
        return head;
    }

private:
    int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }
};