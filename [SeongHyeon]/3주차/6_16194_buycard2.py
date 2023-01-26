import sys


N = int(sys.stdin.readline())

com = [0] + list(sys.stdin.readline().split())
dp = [9999999999999999999999999999]*(N+1)
dp[0] = 0

for i in range(1,N+1):
    for k in range(1,i+1):
        dp[i] = min(dp[i], dp[i-k] + int(com[k]))
print(dp[N])
