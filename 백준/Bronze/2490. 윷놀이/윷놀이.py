a = []
for i in range(3):
    a.append(list(map(int, input().split())))

result = []
for i in range(len(a)):
    cnt = 0
    for j in range(len(a[i])):
        if a[i][j] == 0:
            cnt += 1
    if cnt == 0:
        result.append("E")
    elif cnt == 1:
        result.append("A")
    elif cnt == 2:
        result.append("B")
    elif cnt == 3:
        result.append("C")
    elif cnt == 4:
        result.append("D")
print(*result)