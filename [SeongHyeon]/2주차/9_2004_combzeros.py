import sys,math


count1 = 0
count2 = 0
count3 = 0
count4 = 0
A,B=map(int,sys.stdin.readline().strip().split())

def find(a, b):
    if a<b:
        return 1
    if a%b ==0:
        a//=b
        return b*find(a,b)

for i in range(B,A):
    count1 = find(i, 2)
    count2 = find(i, 5)
for j in range(B):
    count3 = find(j, 2)
    count4 = find(j, 5)
print(min((count1-count3),(count2-count4)))    