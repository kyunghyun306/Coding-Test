import sys

input = sys.stdin.readline

N = int(input())
P = list(map(int, input().split()))
sumArr = [0] * N

for i in range(1, N):
    for j in range(i-1, -1, -1):
        if j == 0:
            insertIndex = 0
        if P[j] <= P[i]:
            insertIndex = j + 1
            break

    temp = P[i]

    for j in range(i, insertIndex, -1):
        P[j] = P[j-1]
    
    P[insertIndex] = temp

for i in range(N):
    sumArr[i] = sumArr[i-1] + P[i]

print(sum(sumArr))
