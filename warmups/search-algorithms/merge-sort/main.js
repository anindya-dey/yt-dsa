const inputArray = [ 12, 5, 9, 4, 10, 43 ];
console.log(inputArray);

const merge = (arr, low, mid, high) => {
  let left = low;
  let right = mid + 1;
  let temp = [];

  while (left <= mid && right <= high) {
    if (arr[left] < arr[right]) {
      temp.push(arr[left]);
      left++;
    } else {
      temp.push(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push(arr[left]);
    left++;
  }

  while (right <= high) {
    temp.push(arr[right]);
    right++;
  }

  for (let i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}

const mergeSort = (arr, low, high) => {
  if (low >= high) return;

  let mid = Math.floor((low + high) / 2);

  mergeSort(arr, low, mid);

  mergeSort(arr, mid + 1, high);

  merge(arr, low, mid, high);
}

mergeSort(inputArray, 0, inputArray.length - 1);
console.log(inputArray);
