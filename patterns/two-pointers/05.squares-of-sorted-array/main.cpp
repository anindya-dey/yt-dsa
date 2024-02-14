class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        vector<int> result = {};

        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r])) {
                result.insert(result.begin(), nums[l] * nums[l]);
                l++;
            } else {
                result.insert(result.begin(), nums[r] * nums[r]);
                r--;
            }
        }

        return result;
    }
};
