class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> m;

        for(int i = 0; i < n; i++) {
            if (m.find(nums[i]) == m.end()) {
                m.insert({target - nums[i], i});
            } else {
                return { m[nums[i]], i };
            }
        }

        // It is gauranteed that the problem would have one solution,
        // so this line will never be reached
        return { -1, -1 };
    }
};
