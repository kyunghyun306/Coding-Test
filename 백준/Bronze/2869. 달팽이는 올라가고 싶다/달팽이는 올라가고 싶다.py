import math

a, b, v = map(int, input().split())
print(int(1+math.ceil((v-a)/(a-b))))
