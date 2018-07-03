# B. Effective Approach
n = int(input())
# print('debug> n:{}'.format(n))  # debug
data = list(map(int, input().split(' ')))
# print('debug> data:{}'.format(data))  # debug
nquery = int(input())
# print('debug> nquery:{}'.format(nquery))  # debug
querylist = list(map(int, input().split(' ')))
# print('debug> querylist:{}'.format(querylist))  # debug
vasya, petya = 0, 0
for q in querylist:
    indexright = data.index(q) + 1
    indexleft = (n - indexright) + 1
    # print(indexright)  # debug
    vasya += indexright
    petya += indexleft
    # print(vasya)  # debug
print('{} {}'.format(vasya, petya))
