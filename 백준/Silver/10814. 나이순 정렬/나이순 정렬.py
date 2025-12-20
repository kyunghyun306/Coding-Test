import sys

n = int(sys.stdin.readline())
arr = []

for i in range(n):
    arr.append(sys.stdin.readline().split())

print(*[" ".join(item) for item in sorted(arr, key= lambda x:int(x[0]))], sep='\n')