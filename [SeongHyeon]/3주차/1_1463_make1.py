import sys


N = int(sys.stdin.readline())
count = 0

while N != 1:
    if (N % 3)== 0:
        N //=3
        count +=1
    if (N % 2) == 0:
        N //= 2
        count +=1
    else:
        N-=1
        count +=1
print(count)