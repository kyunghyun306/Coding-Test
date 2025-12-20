import math

n, k = map(int, input().split())

k = math.factorial(n - k) * math.factorial(k)
n = math.factorial(n)

print(n//k)