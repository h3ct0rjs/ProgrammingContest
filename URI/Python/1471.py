#-*-coding:utf-8-*-
from sys import stdin
from math import ceil

for line in stdin:							#read file until eof
	n=line.split()
	n,r=int(n[0]),int(n[1])
	x=input().split(" ")					#test case
	x=list(map(int,x))
	x.sort()
	#print(x)
	a=[]
	for i in range(len(x)):
		#print("i: ",i,"i+1",i+1,"x[i]",x[i])
		if(x[i]!=i+1):
			a.append(int(ceil((i+1+x[i]))//2))
	
	if(len(a)==0):
		print("*")
	else:
		for i in range(r-1):
			print(a[i],end=' ')
	print('')
	