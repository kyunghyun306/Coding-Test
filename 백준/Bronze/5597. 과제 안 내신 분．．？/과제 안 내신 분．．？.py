import sys

num = set([i+1 for i in range(30)])
s_m = []

for _ in range(28):
    s_m.append(int(sys.stdin.readline()))
s_m = set(s_m)

print(*sorted(num-s_m), sep= '\n')