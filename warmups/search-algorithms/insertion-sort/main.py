def insertion_sort(arr: list[int]) -> None:
    n = len(arr)
    for i in range(1, n):
        for j in range(i, 0, -1):
            if arr[j] > arr[j-1]:
                break
            arr[j], arr[j-1] = arr[j-1], arr[j]


input_array = [12, 5, 9, 4, 10, 43]
print(input_array)

insertion_sort(input_array)
print(input_array)
