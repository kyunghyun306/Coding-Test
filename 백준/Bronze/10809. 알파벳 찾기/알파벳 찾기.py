from string import ascii_lowercase

alphabet_list = list(ascii_lowercase)
word = list(input())
result = [-1] * (len(alphabet_list))

for i in range(len(alphabet_list)):
    if alphabet_list[i] in word:
        result[i] = word.index(alphabet_list[i])

print(*result)