/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var reverseKGroup = function(head, k) {
    const dummy = new ListNode(0, head);
    let groupPrev = dummy;

    while (true) {
        let kth = groupPrev;
        let count = k;
        while (kth && count > 0) {
            kth = kth.next;
            count--;
        }

        if (!kth) break;

        let groupNext = kth.next;
        let prev = groupNext, curr = groupPrev.next;
        while (curr != groupNext) {
            let next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        let tmp = groupPrev.next;
        groupPrev.next = kth;
        groupPrev = tmp;
    }

    return dummy.next;
};
