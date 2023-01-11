from collections import deque
import sys

deq = deque()
n = int(input())

for i in range(n):
    command = sys.stdin.readline().split()

    if command[0] == "push_front":
        deq.appendleft(command[1])
    elif command[0] == "push_back":
        deq.append(command[1])
    elif command[0] == "pop_front":
        if deq:
            print(deq[0])    
            deq.pop(0)
        else:
            print("-1")
    elif command[0] == "pop_back":
        if deq:
            print(deq[len(deq) - 1])    
            deq.pop()
        else:
            print("-1")
    elif command[0] == "size":
        print(len(d))
    elif command[0] == "empty":
        if deq:
            print("0")
        else:
            print("1")
    elif command[0] == "front":
        if deq:
            print(deq[0])
        else:
            print("-1")
    elif command[0] == "back":
        if deq:
            print(deq[len(d) - 1])
        else:
            print("-1")