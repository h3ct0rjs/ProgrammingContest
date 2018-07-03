# A. Is your horseshoe on the other hoof?
shoes = list(map(int, input().split(' ')))
print(abs(4-len(set(shoes))))
