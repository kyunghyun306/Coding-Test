import sys
input = sys.stdin.readline

N = int(input())
factorial = 1
cnt = 0

for i in range(N, 0, -1):
    factorial *= i

for i in str(factorial)[::-1]:
    if i == "0":
        cnt += 1
    else:
        print(cnt)
        break
