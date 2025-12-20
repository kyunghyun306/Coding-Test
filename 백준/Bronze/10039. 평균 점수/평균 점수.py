score = []
sum_score = 0

for i in range(0, 5):
    score.append(int(input()))
    if score[i] < 40:
        score[i] = 40

for i in score:
    sum_score += i

print(int(sum_score/5))