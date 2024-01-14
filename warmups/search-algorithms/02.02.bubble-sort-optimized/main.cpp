#include <iostream>
using std::cout;
using std::endl;
using std::swap;

#include <vector>
using std::vector;

// if no swap was performed,
// it means all elements are in correct order
// hence, break the loop
void bubble_sort_optimized(vector<int> &arr) {
    int n = arr.size();

    for (int i = n - 1; i >= 1; i--) {
        bool didSwap = false;
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didSwap = true;
                cout << "Swapped! ";
            }
        }
        if (!didSwap) break;
    }
}

int main() {
    vector<int> input_arr = { 1, 2, 3, 4, 5 };

    cout << "Unsorted array:" << endl;
    for (int num : input_arr)
        cout << num << " ";
    cout << endl;

    bubble_sort_optimized(input_arr);

    cout << "Sorted array:" << endl;
    for (int num : input_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
