x = int(input())
y = int(input())
Quadrant = 0

if x > 0 and y > 0:
    Quadrant = 1
elif x < 0 and y > 0:
    Quadrant = 2
elif x < 0 and y < 0:
    Quadrant = 3
elif x > 0 and y < 0:
    Quadrant = 4

print(Quadrant)