import sys,math


count1 = 0
count2 = 0
A,B=map(int,sys.stdin.readline().strip().split())

def find(a, b):
    count = 0
    if a<b:
        return 0
    if a%b ==0:
        count +=1
        a//=b
        return count+find(a,b)
    else:
        return 0

for i in range(B,A+1):
    count1 += find(i, 2)
    count2 += find(i, 5)
for j in range(B):
    count1 -= find(j, 2)
    count2 -= find(j, 5)
print(min(count2,count1))    
