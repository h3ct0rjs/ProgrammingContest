data=[]
for i in range(5):
	data.append(int(input()))
b=[i for i in data if i%2==0]
print(len(b),"valores pares")