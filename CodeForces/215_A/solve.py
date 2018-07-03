# 215A - Bicycle Chain
n = int(input())
# print('n:{}'.format(n))  # debug
a = [int(i) for i in input().split()]
# print('a:{}'.format(a))  # debug
m = int(input())
# print('m:{}'.format(m))  # debug
b = [int(i) for i in input().split()]
# print('b:{}'.format(b))  # debug
res = list(filter(lambda x: x.is_integer(),
                  list(i / j for j in a for i in b)))
maxv = max(res)
print(res.count(maxv))
