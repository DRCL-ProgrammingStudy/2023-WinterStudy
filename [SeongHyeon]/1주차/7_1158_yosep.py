import sys

command = list(sys.stdin.readline().split())

Nq = []
ans = []
pr = 0
for i in range(int(command[0])):
    Nq.append(i+1)
for j in range(int(command[0])):
    pr +=  int(command[1]) -1
    if pr >= len(Nq):
        pr = pr % len(Nq)
    ans.append(str(Nq.pop(pr)))
print("<", ", ".join(ans)[:],">", sep='')