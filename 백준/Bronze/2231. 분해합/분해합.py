n = int(input())
result = False

for i in range(1, n):
    num = []
    for j in str(i):
        num.append(int(j))
    if i + sum(num) == n:
        print(i)
        result = True
        break
if not result:
    print(0)