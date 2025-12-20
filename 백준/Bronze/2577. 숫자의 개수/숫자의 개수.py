import sys

ip = sys.stdin.readline
A = int(ip())
B = int(ip())
C = int(ip())
x = list(str(A * B * C))
y = list(map(int, x))

for i in range(0,10):
    print(y.count(i))