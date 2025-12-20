x, y = map(int, input().split())


def GCD(x, y):
    while y:
        x, y = y, x % y
    return x


print(GCD(x, y))


def LCM(x, y):
    return x * y // GCD(x, y)


print(LCM(x, y))