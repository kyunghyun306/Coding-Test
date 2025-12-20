import sys


def isPrime(num):
    if num < 2:
        return False
    else:
        for i in range(2, int(num ** (1 / 2)) + 1):
            if int(num % i) == 0:
                return False
    return True


n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
cnt = 0

for i in arr:
    if isPrime(i):
        cnt += 1
print(cnt)