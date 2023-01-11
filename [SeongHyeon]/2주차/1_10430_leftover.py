import sys

command = list(sys.stdin.readline().split())

A = int(command[0])
B =int( command[1])
C = int(command[2])

a =  (A+B)%C
b=   ((A%C) + (B%C))%C
c = (A*B)%C
d = ((A%C) * (B%C))%C

print(a)
print(b)
print(c)
print(d)