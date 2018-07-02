# A. Is your horseshoe on the other hoof?
n = int(input())
for _ in range(n):
    data = list(map(int, input().split(' ')))
    print('debug #>  data: {}'.format(data))  # debug
    counts = [data.count(data[i]) for i in range(4)]
    nc = [counts[i]-1 for i in range(4)]
    print(nc)
