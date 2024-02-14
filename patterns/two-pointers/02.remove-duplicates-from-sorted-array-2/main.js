/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let i = 0, limit = 2;

    for (const num of nums) {
        if (i < limit || nums[i-limit] != num) {
            nums[i] = num;
            i++;
        }
    }

    return i;
};
