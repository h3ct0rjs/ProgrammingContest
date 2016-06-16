#!/bin/python
#hfjimenez@utp.edu.co
import sys

n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' ')) #Map the input 
suma=0
for i in arr:
        suma=suma+i

print(suma)
