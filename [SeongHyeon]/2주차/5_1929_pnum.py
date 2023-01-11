import sys,math


A,B=map(int,sys.stdin.readline().strip().split())


def checpm(n):
    last = n//2
    if n<=1:
        return 0
    if n ==2:
        return 1
    for i in range(2, int(math.sqrt(n))+1):
        if n%(i) == 0:
            return 0
    return 1
    
for j in range(A,B+1) :
    if checpm(j) == 1:
        print(j)

