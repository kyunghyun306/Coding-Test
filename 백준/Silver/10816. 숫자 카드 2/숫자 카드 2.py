import sys
input = sys.stdin.readline

n = int(input())
get = list(map(int, input().split()))

m = int(input())
n_list = list(map(int, input().split()))

get_counts = {}
for x in get:
    if x in get_counts:
        get_counts[x] += 1
    else:
        get_counts[x] = 1

result = [get_counts.get(i, 0) for i in n_list]

for i in result:
    print(i, end=" ")
