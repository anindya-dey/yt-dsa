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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy {0, head};

        ListNode* prev = &dummy;
        ListNode* curr = head;
        ListNode* temp_prev = nullptr;

        for (int i = 0; i < left - 1; i++) {
            prev = curr;
            curr = curr->next;
        }

        for (int i = 0; i < right - left + 1; i++) {
            ListNode* next = curr->next;
            curr->next = temp_prev;
            temp_prev = curr;
            curr = next;
        }

        prev->next->next = curr;
        prev->next = temp_prev;

        return dummy.next;
    }
};
