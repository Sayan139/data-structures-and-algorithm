def second_largest(arr):
    if len(arr) < 2:
        return "array should have atlest 2 element"
    if arr[0] > arr[1]:
        first = arr[0]
        second = arr[1]
    else:
        first = arr[1]
        second = arr[0]
    for i in range(2,len(arr)):
        if arr[i] > first:
            second = first
            first = arr[i]
        elif arr[i] > second and arr[i] != first:
            second = arr[i]
    return second 
arr = [34,23,56,23,67,12,56]
print("the second largest element in the array is:",second_largest(arr))
