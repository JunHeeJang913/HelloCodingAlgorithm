def binarySearch(list, item):
    low = 0
    high = len(list)-1

    while low<=high:
        mid = (low+high)//2
        guess = list[mid]

        if guess == item:
            return mid
        if guess > item :
            high = mid-1
        else:
            low = mid + 1   #end of while
    return None     #end of binary Search   #주의!! python에서는 들여쓰기 매우 중요

my_list=[1,3,5,7,9] 

print (binarySearch(my_list, 3))
print (binarySearch(my_list, -1))