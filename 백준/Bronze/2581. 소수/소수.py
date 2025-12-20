M = int(input())
N = int(input())
num = []

for i in range(M, N + 1):
    sosu = True
    for j in range(2, i):
        if i % j == 0:
            sosu = False
            break
    if sosu and i != 1:
        num.append(i)

if len(num) > 0:
    print(sum(num))
    print(num[0])
else:
    print(-1)