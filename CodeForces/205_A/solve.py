# A. Little Elephant and Rozdil
n = int(input())
cities = [int(i) for i in input().split()]
pr = cities.count(min(cities))
print('Still Rozdil' if pr % 2 == 0 else cities.index(min(cities))+1)
