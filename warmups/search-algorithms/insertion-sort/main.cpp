#include <iostream>
using std::cout;
using std::endl;
using std::swap;

#include <vector>
using std::vector;

void insertion_sort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] > arr[j - 1]) break;
            swap(arr[j], arr[j - 1]);
        }
    }
}

int main() {
    vector<int> input_arr = { 12, 5, 9, 4, 10, 43 };

    cout << "Unsorted array:" << endl;
    for (int num : input_arr)
        cout << num << " ";
    cout << endl;

    insertion_sort(input_arr);

    cout << "Sorted array:" << endl;
    for (int num : input_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
