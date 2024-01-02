class Solution {
    maxSumWithK(a, n, k)
    {
        let sum = 0;
        
        for (let i = 0; i < k; i++) {
            sum += a[i];
        }
        
        let j = 0;
        let last = 0;
        let ans = Number.MIN_SAFE_INTEGER;
        ans = ans > sum ? ans : sum;

        for (let i = k; i < n; i++) {
            sum += a[i];
            last += a[j++];
            ans = ans > sum ? ans : sum;

            if (last < 0) {
                sum -= last;
                ans = ans > sum ? ans : sum;
                last = 0;
            }
        }

        return ans;
    }
}
