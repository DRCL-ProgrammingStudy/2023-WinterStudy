import sys

N = int(sys.stdin.readline())
command = list(sys.stdin.readline().split())
ans = 0
def checpm(n):
    last = n//2
    if n==1:
        return 0
    if n ==2:
        return 1
    for i in range(last):
        if n%(i+2) == 0:
            return 0
    return 1
    
for j in range(N) :
    
    ans += checpm(int(command[j]))
print(ans)

