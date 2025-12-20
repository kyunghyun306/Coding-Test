n = list(map(int, input().split()))
num = 0

for i in range(len(n)):
    a =  n[i] * n[i]
    num += a

print(num % 10)