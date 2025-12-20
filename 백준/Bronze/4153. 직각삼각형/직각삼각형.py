a = []
while True:
    a.append(list(map(int, input().split())))
    if a[-1] == [0, 0, 0]:
        del a[-1]
        break
result = []
for i in range(len(a)):
    a[i].sort()
    if pow(a[i][0],2) + pow(a[i][1],2) == pow(a[i][2],2):
        result.append("right")
    else:
        result.append("wrong")
print(*result, sep='\n')