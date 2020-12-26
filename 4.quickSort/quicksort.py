def quickSort(arr):
    if len(arr) < 2 :   #기본단계
        return arr
    else:               #재귀단계
        pivot = arr[0]
        less = [i for i in arr[1:] if i <= pivot]
        greater = [i for i in arr[1:] if i > pivot]

        return quickSort(less) + [pivot] + quickSort(greater)


print(quickSort([10,5,2,3]))