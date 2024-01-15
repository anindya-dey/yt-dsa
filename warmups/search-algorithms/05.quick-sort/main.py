def partition(arr: list[int], start: int, end: int) -> int:
  pivot = arr[start]
  left = start
  right = end

  while left < right:
    while left < end and arr[left] <= pivot:
      left += 1
    while right > start and arr[right] > pivot:
      right -= 1

      if left < right:
        arr[left], arr[right] = arr[right], arr[left]

  arr[start], arr[right] = arr[right], arr[start]

  return right


def quick_sort(arr: list[int], start: int, end: int) -> None:
  if start < end:
    partition_index = partition(arr, start, end)
    quick_sort(arr, start, partition_index - 1)
    quick_sort(arr, partition_index + 1, end)


input_array = [12, 5, 9, 4, 10, 43]
print(input_array)

quick_sort(input_array, 0, len(input_array) - 1)
print(input_array)
