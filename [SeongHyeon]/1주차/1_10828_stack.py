import sys
N = int(sys.stdin.readline())
stack = []
for _ in range(N) :
    data = sys.stdin.readline().split()
    order =  data[0]
    if order == 'push' :
        value = data[1]
        stack.append(value)

    elif order== 'pop' :
        if len(stack)==0 :
            print(-1)
        else :
            print(stack.pop())
    elif order == 'size' :
        print(len(stack))
    elif order== 'empty' :
        if len(stack)==0 :
            print(1)
        else :
            print(0)
    elif order == 'top' :
        if len(stack)==0 :
            print(-1)
        else :
            print(stack[len(stack)-1])