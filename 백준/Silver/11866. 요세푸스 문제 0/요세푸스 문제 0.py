import sys
input = sys.stdin.readline

n, k = map(int, input().split())
arr=[i+1 for i in range(n)]
result = []

cnt = 0
while len(arr) > 0:
    cnt += k-1
    if cnt > len(arr)-1:
        cnt = cnt % len(arr)

    result.append(arr.pop(cnt))

print("<", end='')
print(*result, sep=', ', end='')
print(">")