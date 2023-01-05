n = int(input())
stack = []
ans = []
a = 0
b = 1
for i in range(n):
    num = int(input())

    while b <= num:
        stack.append(b)
        ans.append("+")
        b += 1
    if stack[-1] == num:
        stack.pop()
        ans.append("-")
    else:
        print('no')
        a = 1
        break
if a ==0:
    for i in ans:
        print(i)