import sys

sys.stdin=open("./1158.txt")

n, k = map(int,sys.stdin.readline().split(" "))
q=[]

for i in range(1,n+1):
    q.append(i)

result = []
num = 0

for i in range(n):
    num += k-1
    if num >= len(q):
        num = (num)%len(q)
    result.append(str(q.pop(num)))
print("<", ", ".join(result), ">",sep='')