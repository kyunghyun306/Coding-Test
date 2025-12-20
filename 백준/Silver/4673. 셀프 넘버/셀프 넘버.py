num_array = []

for i in range(1, 10000):
    num_array.append(i)

for i in range(1, 10000):
    try:
        if i < 10 and i >= 1:
            j = i // 1
            num_array.remove(i + j)
        elif i < 100 and i >= 10:
            j = i // 10
            k = i % 10
            num_array.remove(i + j + k)
        elif i < 1000 and i >= 100:
            j = i // 100
            k = (i % 100) // 10
            l = (i % 100) % 10
            num_array.remove(i + j + k + l)
        elif i < 10000 and i >= 1000:
            j = i // 1000
            k = (i % 1000) // 100
            l = ((i % 1000) % 100) // 10
            m = ((i % 1000) % 100) % 10
            num_array.remove(i + j + k + l + m)
    except ValueError:
        continue

for i in num_array:
    print(i)