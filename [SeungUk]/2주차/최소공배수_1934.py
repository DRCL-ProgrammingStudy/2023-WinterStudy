import sys

n = int(sys.stdin.readline())

def 최대공약수(a, b):
    while b >0:
        a, b = b, a%b
    return a
def 최소공배수(a, b):
    return a*b // 최대공약수(a, b)

for i in range(n):
    a, b= map(int, input().split())
    print(최소공배수(a,b))
