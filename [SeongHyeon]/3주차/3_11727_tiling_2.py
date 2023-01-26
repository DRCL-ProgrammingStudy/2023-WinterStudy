import sys


N = int(sys.stdin.readline())
arr = [0, 1, 3]

for i in range(3, N+1):
    arr.append(arr[i-1] + 2*arr[i-2])
    
print(arr[N] % 10007)