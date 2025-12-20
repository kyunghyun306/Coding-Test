count = int(input())
people = []

for i in range(count):
    people.append(list(map(int, input().split())))

rank =[]
for x in range(count):
    n = 1
    for y in range(count):
        if people[x][0] < people[y][0] and people[x][1] < people[y][1]:
            n += 1
    rank.append(n)


for k in range(len(rank)):
    print(rank[k], end= " ")