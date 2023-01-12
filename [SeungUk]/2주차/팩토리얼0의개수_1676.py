n = int(input())

def count(n):
    cnt = 0
    while n >0:
        n //= 5
        cnt += n
    return cnt

print(count(n))