import sys

ip = sys.stdin.readline
N = int(ip())
x = list(map(int, ip().split()))

print(min(x), max(x))