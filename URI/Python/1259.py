#hfjimenez@utp.edu.co
ntc=int(input())
even=[]
odd=[]
for i in range(ntc):
	k=int(input())
	if k%2==0:
		even.append(k)
	else:
		odd.append(k)
even.sort()
odd.sort()
even.extend(odd[::-1])
for i in even:
	print(i)
