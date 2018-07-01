#-*-coding:utf-8-*-
while True:
	try:
		n,r=int(input()),int(input())
		a=[]
		for i in range(r):
			a.append(input())

		print("Hallo")
		print(a)
	except(EOFError):
		break
8