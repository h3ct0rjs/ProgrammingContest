#hfjimenez@utp.edu.co
mymap={"Icosahedron":20,"Dodecahedron":12,"Octahedron":8,"Cube":6,"Tetrahedron":4}
n=int(input());data=[]
for i in range(n):
	data.append(input())
s=0
for i in range(len(data)):
	s+=mymap.get(data[i])
print(s)
