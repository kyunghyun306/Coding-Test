t = int(input())
s = []
result = []

for i in range(t):
    s.append(list(input().split()))

for i in range(t):
    val = ""
    for j in range(len(s[i][1])):
        for k in range(int(s[i][0])):
            val += str(s[i][1][j])
    result.append(val)

for i in range(len(result)):
    print(result[i])