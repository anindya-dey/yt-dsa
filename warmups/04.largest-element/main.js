class Solution {
    largest(arr, n) {
        let largestElement = arr[0];
        
        for (let i = 1; i < n; i++) {
            if (arr[i] > largestElement) {
                largestElement = arr[i];
            }
        }
        
        return largestElement;
    }
}
