t=int(input())
values=[int(input()) for x in range(t)]
even=lambda x: not x%2
odd=lambda i: i%2
k=sorted(list(filter(even,values)))+sorted(list(filter(odd,values)))[::-1]
k=[str(i) for i in k]
print('\n'.join(k))
