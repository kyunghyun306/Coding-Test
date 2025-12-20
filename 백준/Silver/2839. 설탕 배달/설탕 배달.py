import sys

n = int(sys.stdin.readline())

arr = [5001] * (n + 5)

arr[3] = 1
arr[5] = 1

for i in range(6, n+1):
    arr[i] = min(arr[i-3], arr[i-5]) + 1

if arr[n] < 5001:
    print(arr[n])
else:
    print(-1)