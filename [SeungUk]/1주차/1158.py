from collections import deque

n, k =map(int, input().split())
people = deque()
for i in range(1, n+1): people.append(i)
result = []

while people:
    for _ in range(k-1): people.append(people.popleft())

    result.append(people.popleft())
print(str(result).replace('[','<').replace(']','>'))
