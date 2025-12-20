import sys

ip = sys.stdin.readline
T = int(input())
arr = []

for i in range(T):
    A, B = map(int, input().split())
    arr.append(A + B)

for i in range(T):
    print('Case #{}: {}'.format(i + 1, arr[i]))