import sys
N = int(sys.stdin.readline())

for _ in range(N) :
    data = sys.stdin.readline().rstrip()
    word = list(data.split())
    ans = []
    for j in word:
        rev_word = ''.join(reversed(j))
        ans.append(rev_word)
        ans.append(" ")
        result = ''.join(map(str, ans))
    print(result)