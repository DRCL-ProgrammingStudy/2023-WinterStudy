import sys
st1 = list(sys.stdin.readline().rstrip())
st2 = []

for i in range(int(sys.stdin.readline())):
    com = list(sys.stdin.readline().split())
    if com[0] =="L":
        if st1:
            st2.append(st1.pop())
            
    elif com[0] == "D":
        if st2:
            st1.append(st2.pop())
    elif com[0] =="B":
        if st1:
            st1.pop()
    else:
        st1.append(com[1])

st1.extend(reversed(st2))
print(''.join(st1))