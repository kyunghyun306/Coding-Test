A = int(input())
B = int(input())

x = B % 100 % 10
print(A * x)

x = B % 100 // 10
print(A * x)

x = B // 100
print(A * x)

print(A * B)