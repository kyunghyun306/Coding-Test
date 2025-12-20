x, y = map(int, input().split())
a = list(map(int, input().split()))
person = x * y
result = []

for i in range(len(a)):
    result.append(a[i] - person)

print(*result)