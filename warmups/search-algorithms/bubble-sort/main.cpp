#include <iostream>
using std::cout;
using std::endl;
using std::swap;

#include <vector>
using std::vector;


void bubble_sort(vector<int> &arr) {
    int n = arr.size();

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> input_arr = { 12, 5, 9, 4, 10, 43 };

    cout << "Unsorted array:" << endl;
    for (int num : input_arr)
        cout << num << " ";
    cout << endl;

    bubble_sort(input_arr);

    cout << "Sorted array:" << endl;
    for (int num : input_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
