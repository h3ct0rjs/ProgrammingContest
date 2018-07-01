n = int(input())
for i in range(n):
    tmp = input().split(' ')
    start, end = int(int(tmp[0])), int(int(tmp[1]))
    print(start, end)
    data = [i for i in range(start, end + 1)]
    print(data+data[::-1])
