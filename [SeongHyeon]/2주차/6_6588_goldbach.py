import sys,math

N = 1

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
    
while N !=0:
    N = int(sys.stdin.readline())
    for j in range(N):
        if checpm(j) == 1:
            ans1 = j
            if checpm(N-ans1) == 1:
                ans2 = N-ans1
                break
    if N != 0:        
        print(str(N) + " = " + str(ans1) + " + " + str(ans2))

