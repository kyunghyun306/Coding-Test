import sys

n = int(sys.stdin.readline())
arr = []
num = 666

while True:
    if str(num).find("666") != -1:
        arr.append(num)

    if len(arr) == n:
        print(arr[-1])
        break
    num += 1