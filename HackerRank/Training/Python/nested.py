students = []
if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([score,name])
students.sort()
vseclowest=students[1][0]
for i in range(len(students)):
    if students[i][0] == vseclowest:
        print(students[i][1])
