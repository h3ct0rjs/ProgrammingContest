# 41A - Translation
def solve2(orig, translated):
    # print(orig, translated)  # debug
    c = 0
    if len(orig) == len(translated):

        tmp = len(translated)
        for i in range(len(orig)):
            # print('debug#> origin: {} trans:{}'.format(
            #    orig[i], translated[tmp - 1 - i]))  # debug
            if orig[i] == translated[tmp - 1 - i]:
                c += 1
        if (c == len(orig)) and (c == len(translated)):
            return 'YES'
        else:
            return 'NO'
    else:
        return 'NO'


s = input()
t = input()
print(solve2(s, t))
