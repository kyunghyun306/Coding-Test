import sys

ip = sys.stdin.readline
x = []

for i in range(9):
    x.append(int(ip()))

print(max(x), x.index(max(x)) + 1,sep= '\n')