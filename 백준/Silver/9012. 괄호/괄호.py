import sys
input = sys.stdin.readline

t = int(input())
arr = []

for i in range(t):
    arr.append(list(str(input().strip())))
    cnt = 0
    for j in arr[i]:
        if j == ")" :
            cnt -= 1
            if cnt < 0:
                break
        else:
            cnt += 1
    if cnt == 0:
        arr[i] = "YES"
    else:
        arr[i] = "NO"

print(*arr, sep='\n')