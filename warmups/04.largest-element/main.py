def largest( arr, n):
    largest_element = arr[0]
    
    for i in range(1, n):
        if arr[i] > largest_element:
            largest_element = arr[i]
    
    return largest_element
