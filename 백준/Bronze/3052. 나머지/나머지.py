rest = []
num = 0

for i in range(10):
    result = int(input()) % 42
    if result not in rest:
        rest.append(result)

print(len(rest))
