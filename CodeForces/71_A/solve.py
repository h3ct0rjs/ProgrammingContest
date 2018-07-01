#A. Way Too Long Words, 71_A
#hfjimenez@utp.edu.co
n = int(input())
def solve(word):
    #print('word:{}'.format(word))  #debug
    return (word[0] + str(len(word[2:])) + word[len(word) - 1]) if len(word) > 10 else word
        
for i in range(n):
    w = input()
    print(solve(w))
