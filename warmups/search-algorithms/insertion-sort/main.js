const inputArray = [ 12, 5, 9, 4, 10, 43 ];
console.log(inputArray);

const insertionSort = arr => {
    const n = arr.length;

    for (let i = 0; i < n; i++) {
        for (let j = i; j > 0; j--) {
            if (arr[j] > arr[j-1]) break;

            let temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
}

insertionSort(inputArray);
console.log(inputArray);
