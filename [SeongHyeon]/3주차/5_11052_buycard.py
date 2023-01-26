import sys


N = int(sys.stdin.readline())

com = list(sys.stdin.readline().split())
dp = [0]*(N+1)


for i in range(1,N+1):
    for k in range(1,i+1):
        dp[i] = max(dp[i], dp[i-k] + int(com[k]))
print(dp[i])
