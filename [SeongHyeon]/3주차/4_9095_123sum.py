import sys


N = int(sys.stdin.readline())
arr = [1, 2, 4]


for _ in range(N):
    for i in range(3, 12) :
        arr.append(arr[i-1] + arr[i-2] + arr[i-3])
    data = int(sys.stdin.readline())
    print(arr[data-1])
