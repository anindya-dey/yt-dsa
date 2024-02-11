/**
 * @param {number[]} arr
 * @param {number} n
 * @returns {boolean}
*/

class Solution {
    arraySortedOrNot(arr, n) {
        let previous = -Infinity;
        
        for (let num of arr) {
            if (previous > num) {
                return false;
            }
            previous = num;
        }
        
        return true;
    }
}