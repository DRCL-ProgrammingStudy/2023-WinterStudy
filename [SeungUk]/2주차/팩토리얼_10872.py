n = int(input())

def 팩토리얼(n):
    result = 1
    if n > 0:
        result = n * 팩토리얼(n-1)
    return result

print(팩토리얼(n))