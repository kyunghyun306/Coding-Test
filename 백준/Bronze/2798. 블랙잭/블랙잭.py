n, m = map(int, input().split())
list_n = list(map(int, input().split()))
result = 0

for i in range(len(list_n)):
    for j in range(i + 1, len(list_n)):
        for k in range(j + 1, len(list_n)):
            num = list_n[i] + list_n[j] + list_n[k]
            if result < num <= m:
                result = num

print(result)