import sys

ip = sys.stdin.readline
N = int(ip())

for i in range(1, N + 1):
    x = ' ' * (N - i)
    y = '*' * i
    print(x + y)