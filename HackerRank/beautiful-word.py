#Challenge Week 31 of code. 
vowels=['a','e','i','o','u']

def isvowel(char):
	if char in vowels:
		return True
	else :
		return False

def solve(w):
	for i in range(len(w)-1):
		if w[i] != w[i+1]:
			if (isvowel(w[i]) and not isvowel(w[i+1])) or \
				(not isvowel(w[i]) and isvowel(w[i+1])):
				continue
			else:
				return False
	return True

testcase=input()

if solve(testcase):
	print('Yes')
else :
	print('No')

