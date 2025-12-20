N = int(input())
score = list(map(int, input().split()))
sum_score = 0

high_score = max(score)

for i in score:
    i = i / high_score * 100
    sum_score += i

print(sum_score / N)