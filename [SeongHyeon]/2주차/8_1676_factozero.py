import sys


count = 0
N = int(sys.stdin.readline())
def facto(a):
    if a <= 1:
        return 1
    return a*facto(a-1)
ans = facto(N)
while 1:
    if ans % 10 == 0:
        ans //=10
        count +=1
    else:
        break
print(count)    