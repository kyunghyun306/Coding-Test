t = int(input())
list_t = []
result = []

for i in range(t):
    list_t.append(list(map(int, input().split())))
    x = 1
    y = list_t[i][2]
    h = list_t[i][0]
    while True:
        if y <= h:
            break
        x += 1
        y -= h
    result.append(int(str(y) + '%02d' %x))

print(*result, sep='\n')