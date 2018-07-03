# A. Polycarp's Pockets
n = int(input())
# print('debug> {}'.format())    # debug
# print('debug> {}'.format(n))  # debug
data = [int(i) for i in input().split(' ')]
# print('debug> {}'.format(data))  # debug
freq = {x: data.count(x) for x in data}
# print('debug> {}'.format(freq))  # debug
print(max(freq.values()))
