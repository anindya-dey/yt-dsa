class Solution {
public:
    int largest(vector<int> &arr, int n)
    {
        int largest_element = arr[0];
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest_element) {
                largest_element = arr[i];
            }
        }
        
        return largest_element;
    }
};
