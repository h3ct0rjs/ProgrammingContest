# A. Business trip
k = int(input())
# print('debug#> goal : {}'.format(k))  # debug
data = [int(i) for i in input().split(' ')]
asc = sorted(data)[::-1]
# print('debug#> origin : {}\n   sorted:{} '.format(data, asc))  # debug
flag = False
add, count = 0, 0
if k == 0:
    print(count)
    flag = True
elif sum(asc) < k:
    print(-1)
    flag = True
else:
    while (k > add):
        add += asc[count]
        count += 1
        # print('debug#> add : {} count:{} goal:{}'.format(add, count, k))  # debug
if not flag:
    print(count)
