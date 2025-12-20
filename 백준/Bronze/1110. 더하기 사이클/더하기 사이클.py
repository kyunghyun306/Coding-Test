N = int(input())
new_n = N
c = 0

while True:
    new_n = (new_n % 10) * 10 + (new_n // 10 + new_n % 10) % 10
    c = c + 1
    if new_n == N:
        break
print(c)