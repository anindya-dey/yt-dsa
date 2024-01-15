const inputArray = [ 12, 5, 9, 4, 10, 43 ];
console.log(inputArray);

const partition = (arr, start, end) => {
  const pivot = arr[start];
  let left = start;
  let right = end;

  while (left < right) {
    while (arr[left] <= pivot && left < end) {
      left++;
    }
    while (arr[right] > pivot && right > start) {
      right--;
    }
    if (left < right) {
      [arr[left], arr[right]] = [arr[right], arr[left]];
    }
  }

  [arr[start], arr[right]] = [arr[right], arr[start]];

  return right;
}

const quickSort = (arr, start, end) => {
  if (start < end) {
    const partitionIndex = partition(arr, start, end);
    quickSort(arr, start, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, end);
  }
}

quickSort(inputArray, 0, inputArray.length - 1);
console.log(inputArray);
