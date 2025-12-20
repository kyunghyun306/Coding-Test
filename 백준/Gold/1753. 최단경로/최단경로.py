import sys
from queue import PriorityQueue

input = sys.stdin.readline

V, E = map(int, input().split())
K = int(input())

graph = [[] for _ in range(V+1)]

for i in range(E):
    u, v, w = map(int, input().split())
    graph[u].append([v, w])

INF = 99999999

D = [[i, INF, 0] for i in range(V+1)]
D[K][1] = 0

queue = PriorityQueue()
queue.put((0, K))

while queue.qsize() > 0:
    minVal = queue.get()
    node = minVal[1]
    if D[node][2] == 0:    
        D[node][2] = 1
        for i in graph[node]:
            val = D[node][1] + i[1]
            if val < D[i[0]][1]:
                D[i[0]][1] = val
                queue.put((val, i[0]))

for i in range(1, V+1):
    if D[i][1] == INF:
        print("INF")
    else:
        print(D[i][1])