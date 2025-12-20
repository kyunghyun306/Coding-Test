N = int(input())
A = {i: 1 for i in map(int, input().split())}
M = input()
for i in map(int, input().split()):
    print(A.get(i, 0))