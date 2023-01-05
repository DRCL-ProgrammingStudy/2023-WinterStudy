import sys
munja = list(sys.stdin.readline().rstrip())
N = int(sys.stdin.readline())
stringf = []

for _ in range(N):
    command = list(sys.stdin.readline().split())
    if command[0] == 'L':
        if munja:
            stringf.append(munja.pop())
    elif command[0] == 'D':
        if stringf:
            munja.append(stringf.pop())
    elif command[0] == 'B':
        if munja :
            munja.pop()
    else:
        munja.append(command[1])
        
munja.extend(reversed(stringf))
print(''.join(munja))