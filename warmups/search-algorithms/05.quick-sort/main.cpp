#include <iostream>
using std::cout;
using std::endl;
using std::swap;

#include <vector>
using std::vector;

int partition(vector<int> &arr, int start, int end) {
    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j) {
        while (arr[i] <= pivot && i < end) {
            i++;
        }

        while (arr[j] > pivot && j > start) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[start], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int start, int end) {
    if (start < end) {
        int partition_index = partition(arr, start, end);
        quick_sort(arr, start, partition_index - 1);
        quick_sort(arr, partition_index + 1, end);
    }
}

int main() {
    vector<int> input_array = { 12, 4, 9, 1, 2, 9 };

    cout << "Input Array: ";
    for (int num : input_array) {
        cout << num << " ";
    }

    cout << endl;

    quick_sort(input_array, 0, input_array.size() - 1);
    cout << "Sorted Array: ";
    for (int num : input_array) {
        cout << num << " ";
    }

    return EXIT_SUCCESS;
}
