C = int(input())
result = []

for i in range(C):
    result.append(input())

for i in result:
    score = list(map(int,i.split()))
    sum = 0
    for j in score[1:]:
        sum += j
    avg = sum / score[0]
    overAvg = 0
    for k in score[1:]:
        if k > avg:
            overAvg += 1
    print("%.3f" % ((overAvg / score[0]) * 100) + "%")