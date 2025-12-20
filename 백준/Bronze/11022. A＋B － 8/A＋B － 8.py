import sys

ip = sys.stdin.readline
T = int(input())
arr = []
z = 0

for i in range(T):
    arr.append(map(int, input().split()))

for i in arr:
    x, y = i
    z = z + 1
    print('Case #{}: {} + {} = {}'.format(z, x, y, x + y))