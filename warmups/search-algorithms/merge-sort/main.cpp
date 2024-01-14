#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

void merge(vector<int> &arr, int low, int mid, int high) {
  int left = low;
  int right = mid + 1;
  vector<int> temp;

  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= high) {
    temp.push_back(arr[right]);
    right++; 
  }

  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}

void merge_sort(vector<int> &arr, int low, int high) {
  if (high <= low) return;

  int mid = (low + high) / 2;

  merge_sort(arr, low, mid);

  merge_sort(arr, mid + 1, high);

  merge(arr, low, mid, high);
}

int main() {
    vector<int> input_arr = { 12, 5, 9, 4, 10, 43 };

    cout << "Unsorted array:" << endl;
    for (int num : input_arr)
        cout << num << " ";
    cout << endl;

    merge_sort(input_arr, 0, input_arr.size() - 1);

    cout << "Sorted array:" << endl;
    for (int num : input_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}