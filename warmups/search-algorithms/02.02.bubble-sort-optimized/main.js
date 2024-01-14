const inputArray = [ 1, 2, 3, 4, 5 ];
console.log(inputArray);

const bubbleSortOptimized = arr => {
    const n = arr.length;

    for (let i = n-1; i >= 1; i--) {
        let didSwap = false;
        for (let j = 0; j < i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                let temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = true;
                console.log("swapped");
            }
        }
        if (!didSwap) break;
    }
}

bubbleSortOptimized(inputArray);
console.log(inputArray);
