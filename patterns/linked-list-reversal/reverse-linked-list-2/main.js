/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function(head, left, right) {
    const dummy = new ListNode(0, head);
    let prev = dummy, curr = head;

    for (let i = 0; i < left - 1; i++) {
        prev = curr;
        curr = curr.next;
    }

    let temp_prev = null;

    for (let i = 0; i < right - left + 1; i++) {
        let next = curr.next;
        curr.next = temp_prev;
        temp_prev = curr;
        curr = next;
    }

    prev.next.next = curr;
    prev.next = temp_prev;

    return dummy.next;
};
