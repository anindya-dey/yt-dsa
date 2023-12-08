from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        group_prev = dummy

        while True:
            kth = group_prev
            count = k
            while kth and count > 0:
                kth = kth.next
                count -= 1

            if not kth:
                break
            
            group_next = kth.next
            prev, curr = kth.next, group_prev.next

            while curr != group_next:
                next = curr.next
                curr.next = prev
                prev = curr
                curr = next
            
            tmp = group_prev.next
            group_prev.next = kth
            group_prev = tmp

        return dummy.next
