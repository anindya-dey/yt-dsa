def merge(arr: list[int], low: int, mid: int, high: int) -> None:
  left = low
  right = mid + 1
  temp = []

  while left <= mid and right <= high:
    if arr[left] < arr[right]:
      temp.append(arr[left])
      left += 1
    else:
      temp.append(arr[right])
      right += 1

  while left <= mid:
    temp.append(arr[left])
    left += 1

  while right <= high:
    temp.append(arr[right])
    right += 1

  for i in range(low, high + 1):
    arr[i] = temp[i - low]
    

def merge_sort(arr: list[int], low: int, high: int) -> None:
  if low >= high:
    return

  mid = (low + high) // 2

  merge_sort(arr, low, mid)

  merge_sort(arr, mid+1, high)

  merge(arr, low, mid, high)


input_array = [12, 5, 9, 4, 10, 43]
print(input_array)

merge_sort(input_array, 0, len(input_array) - 1)
print(input_array)
