import sys

input = sys.stdin.readline

K = int(input())
list = []
for i in range(K):
    num = int(input())
    if len(list) != 0 and num == 0:
        list.pop()
    else:
        list.append(num)

print(sum(list))
