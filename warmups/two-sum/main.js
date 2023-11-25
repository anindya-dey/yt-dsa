/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const n = nums.length;
    const m = {};

    for (let i = 0; i < n; i++) {
        if (m[nums[i]] === undefined) {
            m[target - nums[i]] = i;
        } else {
            return [ i, m[nums[i]] ];
        }
    }

    // It is gauranteed that the problem would have one solution,
    // so this line will never be reached
    return [-1, -1];
};
