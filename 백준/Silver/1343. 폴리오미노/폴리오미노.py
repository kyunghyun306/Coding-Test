import sys

board = str(input())
cnt = 0
board_s = board.split(".")

for i in range(len(board_s)):
    for j in range(len(board_s[i])):
        if board_s[i][j] == "X":
            cnt += 1
    if cnt % 2 != 0:
        print(-1)
        sys.exit()

result = ""
for i in range(len(board_s)):
    a = len(board_s[i])
    b = 0
    while True:
        if a - 4 >= 0:
            for j in range(4):
                result += "A"
            b += 4
            a -= 4
        elif a - 2 >= 0:
            for j in range(2):
                result += "B"
            b += 2
            a -= 2
        elif a == 0:
            break
    if i != len(board_s)-1:
        result += "."

print(result)