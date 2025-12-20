from string import ascii_lowercase

alphabet_list = list(ascii_lowercase)
l = int(input())
s = str(input())
result = []

for i in s:
    cnt = 1
    for j in alphabet_list:
        if i == j:
            result.append(cnt)
        else:
            cnt += 1
h = 0
for i in range(len(result)):
    h += result[i] * pow(31,i)

print(h % 1234567891)