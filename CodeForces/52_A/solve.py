n = int(input())
seq = [int(i) for i in input().split(' ')]
count = [seq.count(1), seq.count(2), seq.count(3)]
print(abs(max(count)-n))
