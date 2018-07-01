# A. Codehorses T-shirts
# Sended Three times :S
n = [0]*int(input())
pastyear = [*(input() for _ in n)]
# count ocurrences :
for i in range(len(n)):
    tmp = input()
    if tmp in pastyear:
        pastyear.remove(tmp)
print(len(pastyear))
