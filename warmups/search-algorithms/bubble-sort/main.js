const inputArray = [ 12, 5, 9, 4, 10, 43 ];
console.log(inputArray);

const bubbleSort = arr => {
    const n = arr.length;

    for (let i = n-1; i >= 1; i--) {
        for (let j = 0; j < i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                let temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

bubbleSort(inputArray);
console.log(inputArray);
