word = list(input().upper())
many_use = ""
cnt = 0
overlap = False

for i in set(word):
    if word.count(i) > cnt:
        cnt = word.count(i)
        many_use = i

for i in set(word):
    if i != many_use and word.count(i) == cnt:
        overlap = True

if overlap:
    print("?")
else:
    print(many_use)