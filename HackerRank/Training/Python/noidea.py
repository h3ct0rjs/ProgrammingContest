lvlhappines = 0
if __name__ == '__main__':
    m, n = input().split(' ')
    m, n = int(n),int(m)
    #print(n,' ',m)
    arr = [int(i) for i in input().split(' ') ]
    #print(arr)
    like = set([int(j) for j in input().split(' ') ])
    dislike = set([int(j) for j in input().split(' ') ])    
    for i in arr:    
        if i in like:
            lvlhappines += 1
        elif i in dislike:
            lvlhappines -= 1
        else :
            lvlhappines +=0
        #print('{}:{} {}\n'.format(i,(i in like) ,lvlhappines))
    print('{}'.format(lvlhappines))
