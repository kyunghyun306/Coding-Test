h, m = map(int, input().split())
c = int(input())

while c > 0:
    if (60 - m) > c:
        m += c
        c = 0
    elif (60 - m) == c:
        c = 0
        h += 1
        m = 0
    else:
        c -= (60 - m)
        h += 1
        m = 0
if h >= 24:
    h -= 24

print(h, m)