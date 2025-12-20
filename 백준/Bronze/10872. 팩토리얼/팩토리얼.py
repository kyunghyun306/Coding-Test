import sys

n = int(sys.stdin.readline())
cnt = 1
if n != 0:
    for i in range(n):
        cnt *= (i+1)
print(cnt)