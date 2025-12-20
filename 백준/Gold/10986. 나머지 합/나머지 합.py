import sys
import math

input = sys.stdin.readline

N, M = map(int, input().split())

arr = list(map(int, input().split()))
sumArr = [0] * N
remainderArr = [0] * M
cnt = 0

for i in range(N):
    sumArr[i] = sumArr[i-1] + arr[i]
    remainder = sumArr[i] % M
    if remainder == 0:
        cnt += 1
    remainderArr[remainder] += 1

for i in range(M):
    cnt += int(math.comb(remainderArr[i], 2))
    

print(cnt)