const inputArray = [ 12, 5, 9, 4, 10, 43 ];
console.log(inputArray);

const selectionSort = arr => {
    const n = arr.length;

    for (let i = 0; i < n - 1; i++) {
        let midIndex = i;

        for (let j = i+1; j < n; j++) {
            if (arr[j] < arr[midIndex]) {
                midIndex = j;
            }
        }

        let temp = arr[i];
        arr[i] = arr[midIndex];
        arr[midIndex] = temp;
    }
}

selectionSort(inputArray);
console.log(inputArray);
