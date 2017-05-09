_,data = input(),set(list(map(int,input().split(" "))))
_,data2 = input(),set(list(map(int,input().split(" "))))
diff = sorted((data.difference(data2)).union(data2.difference(data)))
for i in diff:
    print(i)
