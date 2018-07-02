import re
n = input()
matches = re.fullmatch(r'^(1|14|144)*', n)
# print(matches)  # debug
if matches == None:
    print('NO')
else:
    # print(matches.string)  # debug
    if matches.string == n:
        print('YES')
