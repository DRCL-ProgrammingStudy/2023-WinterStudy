import sys

command = list(sys.stdin.readline().split())

Nq = []
for i in range(int(command[0])):
    Nq.append(i+1)
for j in range(int(command[0])):
    print(Nq)
    pr = ((int(command[1])-1)*(j+1)) % len(Nq)
    if pr >= len(Nq):
        pr  = 
    print(Nq.pop(pr))