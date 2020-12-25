def findSmallest(arr):
    smallest = arr[0]
    smallestIndex = 0

    for i in range(1,len(arr)):
        if arr[i]<smallest:
            smallest = arr[i]
            smallestIndex = i
    return smallestIndex    #end of findSmallest

def selectionSort(arr):
    newArr = []
    for i in range(len(arr)):
        smallest = findSmallest(arr)
        newArr.append(arr.pop(smallest)) 
        #새 배열에 저장하면서 기존 배열에서 제거
    return newArr
#end of selection Sort

myArr=[5,3,6,2,10]

print(selectionSort(myArr))