import sys
N = int(sys.stdin.readline())
stack = ['1']
j = 0
k = 1
ans = []
fg = 0
for i in range(N) :
    data = sys.stdin.readline().rstrip()
    while j <= N :
        if stack[j] == int(data) : 
            stack.pop()
            ans.append('-')
            j-=1
            break
        elif j == N:
            fg = 1
            break
        stack.append(k)
        ans.append('+')
        j+=1
        k+=1
        
if fg == 0:
    for i in ans:
        print(i)
else : 
    print("NO")
