from typing import List

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l = 0
        r = len(numbers) - 1

        while l < r:
            s = numbers[l] + numbers[r]

            if s == target:
                return [ l+1, r+1 ]
            
            if s < target:
                l += 1
            else:
                r -= 1
        
        # It is gauranteed that the problem would have one solution,
        # so this line will never be reached
        return [ -1, -1 ]
