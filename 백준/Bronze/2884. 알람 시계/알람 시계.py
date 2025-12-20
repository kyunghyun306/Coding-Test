H, M = map(int, input().split())

if H == 0:
    if M - 45 >= 0:
        print(H, M - 45)
    else:
        print(24  + (H - 1), 60 + (M - 45))
else:
    if M - 45 >= 0:
        print(H, M - 45)
    else:
        print(H - 1, 60 + (M - 45))