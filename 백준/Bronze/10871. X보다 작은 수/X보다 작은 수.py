import sys

ip = sys.stdin.readline
N, X = map(int, ip().split())
A = list(map(int, ip().split()))
B = ''

for i in range(N):
    if A[i] < X:
        B = B + str(A[i]) + ' '

print(B)