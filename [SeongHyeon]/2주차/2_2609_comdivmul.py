import sys

command = list(sys.stdin.readline().split())

A = int(command[0])
B =int( command[1])
ans1 = 0
i = 1
comdiv = 0
minmul = 0
j = min(A,B)
while i <= min(A,B):
    comdiv = (A%i) + (B%i)
    if comdiv == 0:
        ans1 = i
    i +=1
print(ans1)
while True: 
    minmul = (j%A) + (j%B)
    if minmul == 0:
        print(j)
        break
    j +=1