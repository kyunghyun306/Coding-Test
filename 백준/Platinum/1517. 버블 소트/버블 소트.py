import sys

def merge(arr, leftArr, rightArr):
    global cnt

    leftIndex = 0
    rightIndex = 0
    arrIndex = 0

    while leftIndex < len(leftArr) and rightIndex < len(rightArr):
        if leftArr[leftIndex] <= rightArr[rightIndex]:
            arr[arrIndex] = leftArr[leftIndex]
            leftIndex += 1
        else:
            arr[arrIndex] = rightArr[rightIndex]
            rightIndex += 1
            cnt += len(leftArr) - leftIndex
        arrIndex += 1
    
    while leftIndex < len(leftArr):
        arr[arrIndex] = leftArr[leftIndex]
        leftIndex += 1
        arrIndex += 1

    while rightIndex < len(rightArr):
        arr[arrIndex] = rightArr[rightIndex]
        rightIndex += 1
        arrIndex += 1

    return arr

def mergeSort(arr):
    if len(arr) <= 1:
        return arr
    
    center = len(arr) // 2
    leftArr = mergeSort(arr[:center])
    rightArr = mergeSort(arr[center:])

    sortedArr = merge(arr, leftArr, rightArr)

    return sortedArr

if __name__ == "__main__":
    input = sys.stdin.readline

    N = int(input())
    A = list(map(int, input().split()))

    cnt = 0

    mergeSort(A)
    print(cnt)