n, m = map(int, input().split())

board = []
for i in range(n):
    board.append(list(input()))

result = 64
for y in range(n-7):
    for x in range(m-7):
        rePaintCountB = 0
        rePaintCountW = 0

        for i in range(8):
            for j in range(8):
                ny = i + y
                nx = j + x
                isOdd = (ny+nx)%2

                if board[ny][nx] == "B" and isOdd == 1:
                    rePaintCountB += 1
                elif board[ny][nx] == "W" and isOdd == 0:
                    rePaintCountB += 1

                if board[ny][nx] == "W" and isOdd == 1:
                    rePaintCountW += 1
                elif board[ny][nx] == "B" and isOdd == 0:
                    rePaintCountW += 1
        if rePaintCountB > rePaintCountW:
            if result > rePaintCountW:
                result = rePaintCountW
        else:
            if result > rePaintCountB:
                result = rePaintCountB

print(result)