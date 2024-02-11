class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int previous = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            if (previous > arr[i]) {
                return false;
            }
            
            previous = arr[i];
        }
        
        return true;
    }
};
