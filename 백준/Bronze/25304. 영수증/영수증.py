import sys

input = sys.stdin.readline

x = int(input())
n = int(input())
score=[]

for i in range(n):
    a, b = map(int, input().split())
    score.append(a*b)

if x == sum(score):
    print("Yes")
else:
    print("No")