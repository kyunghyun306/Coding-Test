import sys

ip = sys.stdin.readline
z = []

while True:
    try:
        x, y = map(int, ip().split())
        z.append(x + y)
    except:
        break

for i in range(len(z) - 1):
    print(z[i])