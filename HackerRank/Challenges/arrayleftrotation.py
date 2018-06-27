#-*-coding:utf-8-*-
from sys import stdin,stdout

def solve(l,d):
    return l[d:]+l[:d]

n,d=[int(x) for x in input().split()]
data=[int(x) for x in input().split()]
s=solve(data,d)
[print(x,end=' ') for x in s]
