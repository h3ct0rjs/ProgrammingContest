# beginners Problems
# feedback:hfjimenez@utp.edu.co
# Digits Count

def solve(a, b):
    total = {0: 0, 1: 0, 2: 0, 3: 0, 4: 0, 5: 0, 6: 0, 7: 0, 8: 0, 9: 0}
    for k in range(a, b + 1):
        while k != 0:
            i = k % 10
            total[i] += 1
            #print('{} {} {}'.format(k,i,total[i]))
            k = k // 10
    return total

while True:
    a, b = [int(i) for i in input().split(' ')]
    if a == 0 and b == 0:
        break
    val = solve(a, b)
    print(' '.join(map(str, val.values())))
