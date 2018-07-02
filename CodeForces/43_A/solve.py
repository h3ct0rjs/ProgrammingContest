import operator
n = int(input())
match = {}
for line in range(n):
    tmp = input()
    if tmp in match.keys():
        match[tmp] += 1
    else:
        match[tmp] = 1
print(max(match.items(), key=operator.itemgetter(1))[0])
