import sys

def gcd(a, b):
    if b > a:
        a, b  = b, a
    
    mod = a % b
    
    if mod == 0:
        return b
    
    return gcd(b, mod)


input = sys.stdin.readline

T = int(input())

for i in range(T):
    A, B = map(int, input().split())
    lcm = int(A * B / gcd(A, B))
    print(lcm)