import sys
N = int(sys.stdin.readline())
stringf = []

for _ in range(N):
    command = list(sys.stdin.readline().split())
    if command[0] == 'push':
        stringf.append(command[1])
    elif command[0] == 'pop':
        if stringf:
            print(stringf.pop(0))
        else :
            print(-1)
    elif command[0] == 'size':
        print(len(stringf))
    elif command[0] == 'empty':
        if stringf :
            print(0)
        else:
            print(1)
    elif command[0] == 'front':
        if stringf :
            print(stringf[0])
        else :
            print(-1)
    elif command[0] == 'back':
        if stringf :
            print(stringf[len(stringf)-1])
        else :
            print(-1)
    