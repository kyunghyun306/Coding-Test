a = []
while True:
    a.append(list(map(int, input())))
    if a[-1] == [0]:
        del a[-1]
        break

for i in range(len(a)):
    n = len(a[i])
    k = n // 2
    result = True
    if n % 2 != 1:
        a[i].insert(k, 0)
    for j in range(1, k + 1):
        if a[i][k - j] != a[i][k + j]:
            result = False
            break
    if result:
        print("yes")
    else:
        print("no")