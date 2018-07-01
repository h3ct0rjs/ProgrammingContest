#A. Dubstep
# Help Petya restore the original song.
song = input()
original = song.split('WUB')
tmp =[]
for i in original:
    if i == '':
        continue
    else:
        #print(i)    #debug
        tmp.append(i)

print(' '.join(tmp))