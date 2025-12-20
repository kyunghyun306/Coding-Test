import sys

n = int(sys.stdin.readline())
arr = [int(sys.stdin.readline()) for i in range(n)]
print(*sorted(arr), sep = '\n')