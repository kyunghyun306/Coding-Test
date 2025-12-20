import sys

ip = sys.stdin.readline
z = []

while True:
    try:
        x, y = map(int, input().split())
        z.append(x + y)
    except:
        break

for i in range(len(z)):
    print(z[i])