import sys
input = sys.stdin.readline

N, K = map(int, input().split())

denum = 1
num = 1
for _ in range(K):
    denum=denum*N
    num=num*K
    N-=1
    K-=1

print((denum//num)%10007)