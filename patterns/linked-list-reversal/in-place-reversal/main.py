from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
# The above are uncommented to run the code locally

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head

        prev, curr = None, head

        while curr:
            next, curr.next = curr.next, prev
            prev, curr = curr, next
        
        return prev
