def bubble_sort_optimized(arr: list[int]) -> None:
    n = len(arr)

    for i in reversed(range(n)):
        did_swap = False
        for j in range(i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                did_swap = True
                print("Swapped!")
        if not did_swap:
            break


input_array = [1, 2, 3, 4, 5]
print(input_array)

bubble_sort_optimized(input_array)
print(input_array)
