class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, limit = 2;

        for (auto num : nums) {
            if ( i < limit || nums[i-limit] != num) {
                nums[i] = num;
                i++;
            }
        }

        return i;
    }
};
