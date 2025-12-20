A, B, C = map(int, input().split())

if (A > B or A > C) and (A <= B or A <= C):
    print(A)
elif (B > A or B > C) and (B <= A or B <= C):
    print(B)
else:
    print(C)