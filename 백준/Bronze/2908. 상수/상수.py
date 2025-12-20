a, b = map(str, input().split())
result = [int(a[::-1]), int(b[::-1])]

print(max(result))