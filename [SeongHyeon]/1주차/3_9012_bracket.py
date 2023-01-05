import sys
N = int(sys.stdin.readline())

for _ in range(N) :
    data = sys.stdin.readline().rstrip()
    ans = []
    for j in range(len(data)) :
        if data[j] == '(':
            ans.append(1)
        elif data[j] == ')':
            if len(ans) !=0:
                ans.pop()
            else :
                ans.append(1)
                break
        
    if len(ans) ==  0:
        print('YES')
    else :
        print('NO')
