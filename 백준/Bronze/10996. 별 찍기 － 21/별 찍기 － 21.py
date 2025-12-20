N = int(input())
M = N // 2

for i in range(1, N + 1):
    if N % 2 == 0:
        print("* " * M)
        print(" *" * (N - M))
    else:
        print("* " * (N - M))
        print(" *" * M)