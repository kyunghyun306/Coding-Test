N = int(input())
blank = 0

for i in range(N, 0, -1):
    print(" " * blank + "*" * (i * 2 - 1))
    blank += 1

blank -= 1

for i in range(2, N + 1):
    blank -= 1
    print(" " * blank + "*" * (i * 2 - 1))
