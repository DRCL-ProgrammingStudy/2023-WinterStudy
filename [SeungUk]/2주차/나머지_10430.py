#문제 https://www.acmicpc.net/problem/10430

A,B,C = map(int, input().split())

print((A+B)%C, ((A%C)+(B%C))%C, (A*B)%C, ((A%C)*(B%C))%C, sep="\n")