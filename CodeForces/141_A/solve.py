word = input()
word += input()
words = list(word)
#print('debug# word:{}'.format(words))   #debug
stack = list(input())
#print('debug# stack:{}'.format(stack))  #debug
if len(words) == len(stack):
    for i in range(len(stack)):
        try:
            stack.remove(words[i])
        except Exception as e:
            continue

    if len(stack) == 0:
        print('YES')
    else:
        print('NO')
else:
    print('NO')
    