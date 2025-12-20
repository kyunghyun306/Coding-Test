chess = [1, 1, 2, 2, 2, 8]
get = list(map(int, input().split()))

for i in range(len(chess)):
    chess[i] = chess[i] - get[i]

print(*chess)