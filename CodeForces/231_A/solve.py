count = 0
n = int(input())
for _ in range(n):
    data = input()
    if (data.count('1') >= 2):
        count += 1
print(count)