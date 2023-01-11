import sys

N = int(sys.stdin.readline())
ans = []

def Euclidean(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    return a
    
for _ in range(N) :
    A,B=map(int,sys.stdin.readline().strip().split())
    gcd =Euclidean(A, B)
    print(A*B//gcd)