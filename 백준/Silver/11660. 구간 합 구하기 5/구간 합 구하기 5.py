import sys

input = sys.stdin.readline

N, M = map(int, input().split())

arr = list()
sumArr = [[0] * (N+1) for _ in range(N+1)]

for i in range(1, N+1):
    arr.append(list(map(int, input().split())))
    sum = 0
    for j in range(1, N+1):
        sum += arr[i-1][j-1]
        sumArr[i][j] = sum + sumArr[i-1][j]

for i in range(M):
    result = 0
    y1, x1, y2, x2 = map(int, input().split())
    result = sumArr[y2][x2] - sumArr[y1-1][x2] - sumArr[y2][x1-1] + sumArr[y1-1][x1-1]

    print(result)
