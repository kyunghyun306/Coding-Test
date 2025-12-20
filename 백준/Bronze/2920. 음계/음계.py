val = list(map(int, input().split()))

if val[0] == 1:
    num = val[0]
    for i in range(1,8):
        if num + 1 == val[i]:
            num = val[i]
        else:
            print("mixed")
            quit()
    print("ascending")
elif val[0] == 8:
    num = val[0]
    for i in range(1, 8):
        if num - 1 == val[i]:
            num = val[i]
        else:
            print("mixed")
            quit()
    print("descending")
else:
    print("mixed")