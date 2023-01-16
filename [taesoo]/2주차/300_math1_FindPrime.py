import math

startNumber, endNumber = input().split(' ')

for i in range(int(startNumber), int(endNumber) + 1):
    if i == 1:
        continue
    for j in range(2, int(math.sqrt(i))+1):
        if i % j == 0:
            break
    else:
        print(i)
