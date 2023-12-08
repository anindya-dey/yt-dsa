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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* group_prev = &dummy;
        
        while (true) {
            ListNode* kth = group_prev;
            int count = k;
            while (kth && (count > 0)) {
                kth = kth->next;
                count--;
            }

            if (kth == nullptr) break;

            ListNode* group_next = kth->next;
            ListNode* prev = kth->next;
            ListNode* curr = group_prev->next;

            while(curr != group_next) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            ListNode* tmp = group_prev->next;
            group_prev->next = kth;
            group_prev = tmp;
        }

        return dummy.next;
    }
};
