#!/bin/python3

import sys

def findTheBug(grid):
    r=[i for i in range(len(grid)) if 'X' in grid[i]]
    k=r[0]
    c=0
    for x in grid[k]:
        if x == 'X':
            break
        else:
            c+=1
    return [k,c]

n = int(input().strip())
grid = []
grid_i = 0
for grid_i in range(n):
   grid_t = str(input().strip())
   grid.append(grid_t)
# Return an array containing [r, c]
result = findTheBug(grid)
print (",".join(map(str, result)))
