#A. Bit++
x = 0
n = int(input())
for _ in range(n):
    st = list(input())
    #print('debug# {}'.format(st))  #debug
    st.remove('X')
    if st.count('+') == 2:
        x += 1
    else:
        if st.count('-') == 2:
            x -= 1
print(x)
    
    