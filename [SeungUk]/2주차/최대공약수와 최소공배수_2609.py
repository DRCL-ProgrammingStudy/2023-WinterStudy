a, b = map(int, input().split())

def 최대공약수(a, b):
    while b >0:
        a, b = b, a%b
    return a
def 최소공배수(a, b):
    return a*b // 최대공약수(a, b)

print(최대공약수(a, b))
print(최소공배수(a, b))