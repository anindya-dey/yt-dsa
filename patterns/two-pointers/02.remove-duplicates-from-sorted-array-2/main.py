from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i, limit = 0, 2

        for num in nums:
            if i < limit or nums[i-limit] != num:
                nums[i] = num
                i += 1
        
        return i
