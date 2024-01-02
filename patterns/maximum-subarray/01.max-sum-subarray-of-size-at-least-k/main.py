class Solution():
    def max_sum_with_k(self, a, n, k):
        sum_k = 0
        
        for i in range(k):
            sum_k += a[i]
            
        j = 0
        last = 0
        ans = sum_k
        
        for i in range(k, n):
            sum_k += a[i]
            last += a[j]
            j += 1
            
            ans = max(ans, sum_k)
            
            if last < 0:
                sum_k -= last
                ans = max(ans, sum_k)
                last = 0
    
        return ans