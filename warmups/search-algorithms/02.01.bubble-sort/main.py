def bubble_sort(arr: list[int]) -> None:
    n = len(arr)

    for i in reversed(range(n)):
        for j in range(i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]


input_array = [12, 5, 9, 4, 10, 43]
print(input_array)

bubble_sort(input_array)
print(input_array)
