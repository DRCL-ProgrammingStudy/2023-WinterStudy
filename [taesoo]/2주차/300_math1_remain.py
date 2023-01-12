data1 = input("data1 = ")
data2 = input("data2 = ")
data3 = input("data3 = ")

A = int(data1)
B = int(data2)
C = int(data3)

n1 = (A+B)%C
n2 = ((A%C) + (B%C))%C
n3 = (A*B)%C
n4 = ((A%C) * (B%C))%C

print(n1)
print(n2)
print(n3)
print(n4)
