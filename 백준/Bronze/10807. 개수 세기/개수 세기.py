import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
num = int(sys.stdin.readline())
cnt = 0

for i in arr:
    if i == num:
       cnt += 1

print(cnt)