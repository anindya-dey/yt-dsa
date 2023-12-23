from typing import List

class Solution(object):
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        m = {}

        for i, num in enumerate(nums):
            if m.get(num) == None:
                m[target - num] = i
            else:
                return [ i, m[num] ]
        
        # It is gauranteed that the problem would have one solution,
        # so this line will never be reached
        return [ -1, -1 ]
