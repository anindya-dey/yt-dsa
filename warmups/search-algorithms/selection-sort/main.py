def selection_sort(arr: list[int]) -> None:
    n = len(arr)

    for i in range(n):
        min_index = i
        for j in range(i+1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]


input_array = [12, 5, 9, 4, 10, 43]
print(input_array)

selection_sort(input_array)
print(input_array)
