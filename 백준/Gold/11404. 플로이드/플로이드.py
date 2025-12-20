import sys
input = sys.stdin.readline

n = int(input())
m = int(input())

INF = sys.maxsize

D = [[INF for _ in range(n+1)] for _ in range(n+1)]
for i in range(1, n+1):
    D[i][i] = 0

for _ in range(m):
    a, b, c = map(int, input().split())
    if D[a][b] > c:
        D[a][b] = c

for k in range(1, n+1):
    for s in range(1, n+1):
        for e in range(1, n+1):
            if D[s][e] > D[s][k] + D[k][e]:
                D[s][e] = D[s][k] + D[k][e]

for i in range(1, n+1):
    for j in D[i][1:]:
        if j == INF:
            print(0, end=" ")
        else:
            print(j, end=" ")
    print()