import sys

ip = sys.stdin.readline
N = int(ip())

for i in range(1, N + 1):
    x = '*' * i
    print(x)