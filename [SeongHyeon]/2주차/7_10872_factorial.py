import sys

N = int(sys.stdin.readline())
def facto(a):
    if a <= 1:
        return 1
    return a*facto(a-1)

print(facto(N))

