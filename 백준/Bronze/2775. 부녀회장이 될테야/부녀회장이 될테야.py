t = int(input())
k = []
n = []
result = []

for i in range(t):
    k.append(int(input()))
    n.append(int(input()))

for i in range(t):
    case = []
    for j in range(n[i]):
        case.append(j + 1)
    cnt = 0
    while cnt < int(k[i]):
        cnt += 1
        for j in range(1, n[i]):
            case[j] += case[j-1]
    result.append(case[n[i]-1])

print(*result, sep= '\n')