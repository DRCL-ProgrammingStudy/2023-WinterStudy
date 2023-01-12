n = int(input())

nums = list(map(int, input().split()))
prime = 0

for i in nums:
    a = 0
    if i == 1:
        continue
    for j in range(2, i+1):
        if i % j ==0:
            a += 1
    if a == 1:
        prime += 1
print(prime)