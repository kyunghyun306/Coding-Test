import sys
from collections import deque

n = int(sys.stdin.readline())
data = [i+1 for i in range(n)]
arr = deque(data)

while len(arr) > 1:
    arr.remove(arr[0])
    arr.rotate(-1)

print(*arr)