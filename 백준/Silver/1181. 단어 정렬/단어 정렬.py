import sys

n = int(sys.stdin.readline())
word = []

for i in range(n):
    word.append(sys.stdin.readline().strip())
word = list(set(word))
word.sort(key=lambda x:(len(x),x))

print(*word, sep='\n')