import random

stat = []

for add in range(9):
    stat.append(int(input()))

rd =  random.sample(stat, 7)

while sum(rd) != 100:
    rd = random.sample(stat, 7)

for val in sorted(rd):
    print(val)