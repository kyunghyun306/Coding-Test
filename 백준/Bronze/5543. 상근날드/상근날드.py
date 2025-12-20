burger = []
juice = []

for i in range(0, 3):
    burger.append(int(input()))
    burger.sort()

for i in range(0, 2):
    juice.append(int(input()))
    juice.sort()

print(int(burger[0]+juice[0]-50))