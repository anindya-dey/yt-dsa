from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        prev = dummy
        curr = head

        for i in range(left - 1):
            prev = curr
            curr = curr.next

        temp_prev = None

        for i in range(right - left + 1):
            next = curr.next
            curr.next = temp_prev
            temp_prev = curr
            curr = next
        
        prev.next.next = curr
        prev.next = temp_prev

        return dummy.next
