#include <iostream>
using std::cout;
using std::endl;
using std::swap;

#include <vector>
using std::vector;

void selection_sort(vector<int> &arr) {
    int n = arr.size();

    // Start from the beginning
    for (int i = 0; i < n; i++) {
        // Keep track of index of minimum value
        int min_index = i;

        for (int j = i; j < n-1; j++) {
            // Update index of minimum value if needed
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        // Swap minimum with the current ith element
        swap(arr[i], arr[min_index]);
    }
}

int main() {
    vector<int> input_arr = { 12, 5, 9, 4, 10, 43 };

    cout << "Unsorted array:" << endl;
    for (int num : input_arr)
        cout << num << " ";
    cout << endl;

    selection_sort(input_arr);

    cout << "Sorted array:" << endl;
    for (int num : input_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
