# B. Sale
n, m = input().split(' ')
# print('debug#> n : {}  m:{}'.format(int(n), int(m)))  # debug
data = sorted([int(i) for i in input().split(' ')])
profit = 0
# print('debug#> data : {} '.format(data))  # debug
# print(data[:int(m)])  # debug
for i in range(int(m)):
    if data[i] < 0:
        profit += (data[i] * -1)
print(profit)
