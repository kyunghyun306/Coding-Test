n = int(input())
cnt = 1

while True:
    if n <= 1 + (cnt-1)*(6*cnt)/2:
        print(cnt)
        break
    else:
        cnt += 1