class Solution:
    def arraySortedOrNot(self, arr, n):
        previous = float('-inf')
        
        for num in arr:
            if previous > num:
                return False
            previous = num
        
        return True