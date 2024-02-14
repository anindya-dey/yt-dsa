/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    let l = 0;
    let r = nums.length - 1;
    const result = [];

    while (l <= r) {
        if (Math.abs(nums[l]) > Math.abs(nums[r])) {
            result.unshift(nums[l] * nums[l]);
            l++;
        } else {
            result.unshift(nums[r] * nums[r]);
            r--;
        }
    }

    return result;
};
