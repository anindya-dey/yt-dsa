/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(numbers, target) {
    let l = 0, r = numbers.length - 1;

    while (l < r) {
        let sum = numbers[l] + numbers[r];

        if (sum == target) {
            return [ l+1, r+1 ];
        }

        if (sum < target) {
            l++;
        } else {
            r--;
        }
    }

    // It is gauranteed that the problem would have one solution,
    // so this line will never be reached
    return [ -1, -1 ];
};
